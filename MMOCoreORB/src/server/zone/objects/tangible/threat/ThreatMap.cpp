/*
 * DamageMap.cpp
 *
 *  Created on: 13/07/2010
 *      Author: victor
 */

#include "server/zone/objects/creature/CreatureObject.h"
#include "server/zone/objects/tangible/weapon/WeaponObject.h"
#include "ThreatMap.h"
#include "../tasks/ClearThreatStateTask.h"
#include "../tasks/RemoveAggroTask.h"

void ThreatMapEntry::addDamage(WeaponObject* weapon, uint32 damage) {
	int idx = find(weapon);

	if (idx == -1) {
		put(weapon, damage);

	} else {
		uint32* dmg = &elementAt(idx).getValue();

		*dmg = *dmg + damage;
	}
}

void ThreatMapEntry::setThreatState(uint64 state) {
	if(!threatBitmask & state)
		threatBitmask |= state;

}

bool ThreatMapEntry::hasState(uint64 state) {
	if(threatBitmask & state)
		return true;

	return false;
}

void ThreatMapEntry::clearThreatState(uint64 state) {
	if(threatBitmask & state)
		threatBitmask &= ~state;
}

void ThreatMap::registerObserver(CreatureObject* target) {

	if(threatMapObserver == NULL) {
		threatMapObserver = new ThreatMapObserver(self);
		threatMapObserver->deploy();
	}

	target->registerObserver(ObserverEventType::HEALINGPERFORMED, threatMapObserver);
}

void ThreatMap::removeObservers() {
		for (int i = 0; i < size(); ++i) {
			CreatureObject* creature = elementAt(i).getKey();
			if(creature != NULL && threatMapObserver != NULL)
				creature->dropObserver(ObserverEventType::HEALINGPERFORMED, threatMapObserver);
		}
	}

void ThreatMap::addDamage(CreatureObject* target, uint32 damage) {
	int idx = find(target);

	WeaponObject* weapon = target->getWeapon();

	if (idx == -1) {
		ThreatMapEntry entry;
		entry.addDamage(weapon, damage);
		entry.addAggro(1);

		put(target, entry);
		registerObserver(target);

	} else {
		ThreatMapEntry* entry = &elementAt(idx).getValue();
		entry->addDamage(weapon, damage);
		entry->addAggro(1);
	}
}

void ThreatMap::dropDamage(CreatureObject* target) {
	drop(target);

	if (threatMapObserver != NULL)
		target->dropObserver(ObserverEventType::HEALINGPERFORMED, threatMapObserver);
}

bool ThreatMap::setThreatState(CreatureObject* target, uint64 state, uint64 duration, uint64 cooldown) {

	if((hasState(state) && isUniqueState(state))
			|| !cooldownTimerMap.isPast(String::valueOf(state)))
		return false;

	int idx = find(target);

	if (idx == -1) {
		ThreatMapEntry entry;
		entry.setThreatState(state);
		put(target, entry);
		registerObserver(target);

	} else {
		ThreatMapEntry* entry = &elementAt(idx).getValue();
		entry->setThreatState(state);
	}

	if(duration > 0) {
		ClearThreatStateTask* clearThreat = new ClearThreatStateTask(self, target, state);
		clearThreat->schedule(duration);
	}

	if(cooldown > 0) {
		cooldownTimerMap.updateToCurrentAndAddMili(String::valueOf(state), duration + cooldown);
	}

	if(isUniqueState(state)) {
		cooldownTimerMap.updateToCurrentTime("doEvaluation");
	}

#ifdef DEBUG
	System::out << "Setting threat state on "  << target->getObjectID() << ": " << state << endl;
#endif

	return true;
}

bool ThreatMap::hasState(uint64 state) {

	for (int i = 0; i < size(); ++i) {
		ThreatMapEntry* entry = &elementAt(i).getValue();
		if(entry->hasState(state))
			return true;
	}

	return false;
}

bool ThreatMap::isUniqueState(uint64 state) {
	return state & ThreatStates::UNIQUESTATE;
}

void ThreatMap::clearThreatState(CreatureObject* target, uint64 state) {
	int idx = find(target);

	if (idx != -1) {
		ThreatMapEntry* entry = &elementAt(idx).getValue();
		entry->clearThreatState(state);

#ifdef DEBUG
	System::out << "Clearing threat state on "  << target->getObjectID() << ": " << state << endl;
#endif
	}
}

uint32 ThreatMap::getTotalDamage() {
	uint32 totalDamage = 0;

	for (int i = 0; i < size(); ++i) {
		ThreatMapEntry* entry = &elementAt(i).getValue();

		for (int j = 0; j < entry->size(); ++j) {
			uint32 damage = entry->elementAt(j).getValue();

			totalDamage += damage;
		}
	}

	return totalDamage;
}

CreatureObject* ThreatMap::getHighestDamagePlayer() {
	uint32 maxDamage = 0;
	CreatureObject* player = NULL;

	for (int i = 0; i < size(); ++i) {
		ThreatMapEntry* entry = &elementAt(i).getValue();

		uint32 totalDamage = 0;

		for (int j = 0; j < entry->size(); ++j) {
			uint32 damage = entry->elementAt(j).getValue();

			totalDamage += damage;
		}

		CreatureObject* creature = elementAt(i).getKey();

		if (totalDamage > maxDamage && creature->isPlayerCreature()) {
			maxDamage = totalDamage;
			player = cast<CreatureObject*>(creature);
		}
	}

	return player;
}

CreatureObject* ThreatMap::getHighestThreatCreature() {

	if(currentThreat != NULL
			&& !currentThreat->isDead()
			&& !currentThreat->isIncapacitated()
			&& !cooldownTimerMap.isPast("doEvaluation"))
		return currentThreat;

	threatMatrix.clear();

	for (int i = 0; i < size(); ++i) {
		ThreatMapEntry* entry = &elementAt(i).getValue();
		CreatureObject* creature = elementAt(i).getKey();

		threatMatrix.add(creature, entry);
	}

	currentThreat = threatMatrix.getLargestThreat();

	cooldownTimerMap.updateToCurrentAndAddMili("doEvaluation", ThreatMap::EVALUATIONCOOLDOWN);
	return currentThreat;
}

void ThreatMap::addAggro(CreatureObject* target, int value, uint64 duration) {

	int idx = find(target);

	if (idx == -1) {
		ThreatMapEntry entry;
		entry.addAggro(value);
		put(target, entry);
		registerObserver(target);

	} else {
		ThreatMapEntry* entry = &elementAt(idx).getValue();
		entry->addAggro(value);
	}

	if(duration > 0) {
		RemoveAggroTask* removeAggroTask = new RemoveAggroTask(self, target, value);
		removeAggroTask->schedule(duration);
	}
}

void ThreatMap::removeAggro(CreatureObject* target, int value) {
	int idx = find(target);

	if (idx != -1) {
		ThreatMapEntry* entry = &elementAt(idx).getValue();
		entry->removeAggro(value);
	}
}

void ThreatMap::clearAggro(CreatureObject* target) {
	int idx = find(target);

	if (idx != -1) {
		ThreatMapEntry entry;
		entry.clearAggro();
	}
}

void ThreatMap::addHeal(CreatureObject* target, int value) {
	int idx = find(target);

	if (idx == -1) {
		ThreatMapEntry entry;
		entry.addHeal(value);
		entry.addAggro(2);
		put(target, entry);
		registerObserver(target);

	} else {
		ThreatMapEntry* entry = &elementAt(idx).getValue();
		entry->addHeal(value);
		entry->addAggro(2);
	}
}