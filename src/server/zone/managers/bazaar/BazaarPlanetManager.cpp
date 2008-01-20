/*
Copyright (C) 2007 <SWGEmu>

This File is part of Core3.

This program is free software; you can redistribute
it and/or modify it under the terms of the GNU Lesser
General Public License as published by the Free Software
Foundation; either version 2 of the License,
or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
See the GNU Lesser General Public License for
more details.

You should have received a copy of the GNU Lesser General
Public License along with this program; if not, write to
the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA

Linking Engine3 statically or dynamically with other modules
is making a combined work based on Engine3.
Thus, the terms and conditions of the GNU Lesser General Public License
cover the whole combination.

In addition, as a special exception, the copyright holders of Engine3
give you permission to combine Engine3 program with free software
programs or libraries that are released under the GNU LGPL and with
code included in the standard release of Core3 under the GNU LGPL
license (or modified versions of such code, with unchanged license).
You may copy and distribute such a system following the terms of the
GNU LGPL for Engine3 and the licenses of the other code concerned,
provided that you include the source code of that other code when
and as the GNU LGPL requires distribution of source code.

Note that people who make modified versions of Engine3 are not obligated
to grant this special exception for their modified versions;
it is their choice whether to do so. The GNU Lesser General Public License
gives permission to release a modified version without this exception;
this exception also makes it possible to release a modified version
which carries forward this exception.
*/

/*
 *	server/zone/managers/bazaar/BazaarPlanetManager.cpp generated by Engine3 IDL compiler 0.51
 */

#include "../../objects/auction/AuctionItem.h"

#include "../../objects/player/Player.h"

#include "../../objects/tangible/terminal/bazaar/RegionBazaar.h"

#include "BazaarPlanetManager.h"

#include "BazaarPlanetManagerImplementation.h"

/*
 *	BazaarPlanetManagerStub
 */

BazaarPlanetManager::BazaarPlanetManager() : ORBObjectStub(NULL) {
}

BazaarPlanetManager::BazaarPlanetManager(ORBObjectServant* obj) : ORBObjectStub(obj) {
}

BazaarPlanetManager::BazaarPlanetManager(BazaarPlanetManager& ref) : ORBObjectStub(ref) {
}

BazaarPlanetManager::~BazaarPlanetManager() {
}

BazaarPlanetManager* BazaarPlanetManager::clone() {
	return new BazaarPlanetManager(*this);
}


void BazaarPlanetManager::setPlanet(int planet) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 6);
		invocation.addSignedIntParameter(planet);

		invocation.executeWithVoidReturn();
	} else
		((BazaarPlanetManagerImplementation*) _impl)->setPlanet(planet);
}

void BazaarPlanetManager::addBazaarItem(AuctionItem* item) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 7);
		invocation.addObjectParameter(item);

		invocation.executeWithVoidReturn();
	} else
		((BazaarPlanetManagerImplementation*) _impl)->addBazaarItem(item);
}

void BazaarPlanetManager::removeBazaarItem(long long objectid) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 8);
		invocation.addSignedLongParameter(objectid);

		invocation.executeWithVoidReturn();
	} else
		((BazaarPlanetManagerImplementation*) _impl)->removeBazaarItem(objectid);
}

void BazaarPlanetManager::addBazaar(BazaarTerminalDetails* terminal) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 9);
		invocation.addObjectParameter(terminal);

		invocation.executeWithVoidReturn();
	} else
		((BazaarPlanetManagerImplementation*) _impl)->addBazaar(terminal);
}

void BazaarPlanetManager::getBazaarData(Player* player, long long objectid, int screen, int extent, unsigned int category, int count, int offset) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 10);
		invocation.addObjectParameter(player);
		invocation.addSignedLongParameter(objectid);
		invocation.addSignedIntParameter(screen);
		invocation.addSignedIntParameter(extent);
		invocation.addUnsignedIntParameter(category);
		invocation.addSignedIntParameter(count);
		invocation.addSignedIntParameter(offset);

		invocation.executeWithVoidReturn();
	} else
		((BazaarPlanetManagerImplementation*) _impl)->getBazaarData(player, objectid, screen, extent, category, count, offset);
}

/*
 *	BazaarPlanetManagerAdapter
 */

BazaarPlanetManagerAdapter::BazaarPlanetManagerAdapter(BazaarPlanetManagerImplementation* obj) : ORBObjectAdapter((ORBObjectServant*) obj) {
}

Packet* BazaarPlanetManagerAdapter::invokeMethod(uint32 methid, ORBMethodInvocation* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		setPlanet(inv->getSignedIntParameter());
		break;
	case 7:
		addBazaarItem((AuctionItem*) inv->getObjectParameter());
		break;
	case 8:
		removeBazaarItem(inv->getSignedLongParameter());
		break;
	case 9:
		addBazaar((BazaarTerminalDetails*) inv->getObjectParameter());
		break;
	case 10:
		getBazaarData((Player*) inv->getObjectParameter(), inv->getSignedLongParameter(), inv->getSignedIntParameter(), inv->getSignedIntParameter(), inv->getUnsignedIntParameter(), inv->getSignedIntParameter(), inv->getSignedIntParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void BazaarPlanetManagerAdapter::setPlanet(int planet) {
	return ((BazaarPlanetManagerImplementation*) impl)->setPlanet(planet);
}

void BazaarPlanetManagerAdapter::addBazaarItem(AuctionItem* item) {
	return ((BazaarPlanetManagerImplementation*) impl)->addBazaarItem(item);
}

void BazaarPlanetManagerAdapter::removeBazaarItem(long long objectid) {
	return ((BazaarPlanetManagerImplementation*) impl)->removeBazaarItem(objectid);
}

void BazaarPlanetManagerAdapter::addBazaar(BazaarTerminalDetails* terminal) {
	return ((BazaarPlanetManagerImplementation*) impl)->addBazaar(terminal);
}

void BazaarPlanetManagerAdapter::getBazaarData(Player* player, long long objectid, int screen, int extent, unsigned int category, int count, int offset) {
	return ((BazaarPlanetManagerImplementation*) impl)->getBazaarData(player, objectid, screen, extent, category, count, offset);
}

/*
 *	BazaarPlanetManagerHelper
 */

ORBClassHelper* BazaarPlanetManagerHelper::instance = new BazaarPlanetManagerHelper();

BazaarPlanetManagerHelper::BazaarPlanetManagerHelper() {
	className = "BazaarPlanetManager";

	ObjectRequestBroker::instance()->registerClass(className, this);
}

ORBClassHelper* BazaarPlanetManagerHelper::getInstance() {
	if (instance == NULL)
		return instance = new BazaarPlanetManagerHelper();
	else
		return instance;
}

ORBObject* BazaarPlanetManagerHelper::instantiateObject() {
	return new BazaarPlanetManager();
}

ORBObjectAdapter* BazaarPlanetManagerHelper::createAdapter(ORBObjectServant* obj) {
	ORBObjectAdapter* adapter = new BazaarPlanetManagerAdapter((BazaarPlanetManagerImplementation*)obj);

	ORBObjectStub* stub = new BazaarPlanetManager(obj);
	stub->_setORBClassName(className);
	stub->_setClassHelper(this);

	adapter->setStub(stub);

	obj->_setStub(stub);

	return adapter;
}

/*
 *	BazaarPlanetManagerServant
 */

BazaarPlanetManagerServant::BazaarPlanetManagerServant() {
	_classHelper = BazaarPlanetManagerHelper::getInstance();
}

BazaarPlanetManagerServant::~BazaarPlanetManagerServant() {
}

void BazaarPlanetManagerServant::_setStub(ORBObjectStub* stub) {
	_this = (BazaarPlanetManager*) stub;
}

ORBObjectStub* BazaarPlanetManagerServant::_getStub() {
	return _this;
}

