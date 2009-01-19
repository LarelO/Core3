/*
 *	server/zone/objects/draftschematic/DraftSchematicValues.cpp generated by engine3 IDL compiler 0.55
 */

#include "DraftSchematicValues.h"

#include "DraftSchematicValuesImplementation.h"

#include "DraftSchematic.h"

#include "../tangible/crafting/CraftingTool.h"

/*
 *	DraftSchematicValuesStub
 */

DraftSchematicValues::DraftSchematicValues() : ManagedObject(DummyConstructorParameter::instance()) {
	_impl = new DraftSchematicValuesImplementation();
	_impl->_setStub(this);
}

DraftSchematicValues::DraftSchematicValues(DummyConstructorParameter* param) : ManagedObject(param) {
}

DraftSchematicValues::~DraftSchematicValues() {
}

void DraftSchematicValues::addExperimentalProperty(const String& subtitle, const String& title, float min, float max, const int precision, const bool filler) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addAsciiParameter(subtitle);
		method.addAsciiParameter(title);
		method.addFloatParameter(min);
		method.addFloatParameter(max);
		method.addSignedIntParameter(precision);
		method.addBooleanParameter(filler);

		method.executeWithVoidReturn();
	} else
		((DraftSchematicValuesImplementation*) _impl)->addExperimentalProperty(subtitle, title, min, max, precision, filler);
}

String& DraftSchematicValues::getExperimentalPropertySubtitle(const int i) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addSignedIntParameter(i);

		method.executeWithAsciiReturn(_return_getExperimentalPropertySubtitle);
		return _return_getExperimentalPropertySubtitle;
	} else
		return ((DraftSchematicValuesImplementation*) _impl)->getExperimentalPropertySubtitle(i);
}

String& DraftSchematicValues::getExperimentalPropertySubtitle(const String& title, const int i) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addAsciiParameter(title);
		method.addSignedIntParameter(i);

		method.executeWithAsciiReturn(_return_getExperimentalPropertySubtitle);
		return _return_getExperimentalPropertySubtitle;
	} else
		return ((DraftSchematicValuesImplementation*) _impl)->getExperimentalPropertySubtitle(title, i);
}

String& DraftSchematicValues::getExperimentalPropertyTitle(const String& subtitle) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addAsciiParameter(subtitle);

		method.executeWithAsciiReturn(_return_getExperimentalPropertyTitle);
		return _return_getExperimentalPropertyTitle;
	} else
		return ((DraftSchematicValuesImplementation*) _impl)->getExperimentalPropertyTitle(subtitle);
}

String& DraftSchematicValues::getExperimentalPropertyTitle(const int i) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addSignedIntParameter(i);

		method.executeWithAsciiReturn(_return_getExperimentalPropertyTitle);
		return _return_getExperimentalPropertyTitle;
	} else
		return ((DraftSchematicValuesImplementation*) _impl)->getExperimentalPropertyTitle(i);
}

String& DraftSchematicValues::getVisibleExperimentalPropertyTitle(const int i) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addSignedIntParameter(i);

		method.executeWithAsciiReturn(_return_getVisibleExperimentalPropertyTitle);
		return _return_getVisibleExperimentalPropertyTitle;
	} else
		return ((DraftSchematicValuesImplementation*) _impl)->getVisibleExperimentalPropertyTitle(i);
}

String& DraftSchematicValues::getExperimentalPropertySubtitlesTitle(const int i) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addSignedIntParameter(i);

		method.executeWithAsciiReturn(_return_getExperimentalPropertySubtitlesTitle);
		return _return_getExperimentalPropertySubtitlesTitle;
	} else
		return ((DraftSchematicValuesImplementation*) _impl)->getExperimentalPropertySubtitlesTitle(i);
}

int DraftSchematicValues::getExperimentalPropertySubtitleSize() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);

		return method.executeWithSignedIntReturn();
	} else
		return ((DraftSchematicValuesImplementation*) _impl)->getExperimentalPropertySubtitleSize();
}

int DraftSchematicValues::getExperimentalPropertySubtitleSize(const String& title) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addAsciiParameter(title);

		return method.executeWithSignedIntReturn();
	} else
		return ((DraftSchematicValuesImplementation*) _impl)->getExperimentalPropertySubtitleSize(title);
}

int DraftSchematicValues::getVisibleExperimentalPropertyTitleSize() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);

		return method.executeWithSignedIntReturn();
	} else
		return ((DraftSchematicValuesImplementation*) _impl)->getVisibleExperimentalPropertyTitleSize();
}

int DraftSchematicValues::getExperimentalPropertyTitleSize() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);

		return method.executeWithSignedIntReturn();
	} else
		return ((DraftSchematicValuesImplementation*) _impl)->getExperimentalPropertyTitleSize();
}

bool DraftSchematicValues::hasProperty(const String& attribute) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addAsciiParameter(attribute);

		return method.executeWithBooleanReturn();
	} else
		return ((DraftSchematicValuesImplementation*) _impl)->hasProperty(attribute);
}

bool DraftSchematicValues::isHidden(const String& attribute) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);
		method.addAsciiParameter(attribute);

		return method.executeWithBooleanReturn();
	} else
		return ((DraftSchematicValuesImplementation*) _impl)->isHidden(attribute);
}

void DraftSchematicValues::setCurrentValue(const String& attribute, float value) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);
		method.addAsciiParameter(attribute);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else
		((DraftSchematicValuesImplementation*) _impl)->setCurrentValue(attribute, value);
}

void DraftSchematicValues::setCurrentValue(const String& attribute, float value, float min, float max) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);
		method.addAsciiParameter(attribute);
		method.addFloatParameter(value);
		method.addFloatParameter(min);
		method.addFloatParameter(max);

		method.executeWithVoidReturn();
	} else
		((DraftSchematicValuesImplementation*) _impl)->setCurrentValue(attribute, value, min, max);
}

void DraftSchematicValues::setCurrentPercentage(const String& attribute, float value) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);
		method.addAsciiParameter(attribute);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else
		((DraftSchematicValuesImplementation*) _impl)->setCurrentPercentage(attribute, value);
}

void DraftSchematicValues::setCurrentPercentage(const String& attribute, float value, float min, float max) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);
		method.addAsciiParameter(attribute);
		method.addFloatParameter(value);
		method.addFloatParameter(min);
		method.addFloatParameter(max);

		method.executeWithVoidReturn();
	} else
		((DraftSchematicValuesImplementation*) _impl)->setCurrentPercentage(attribute, value, min, max);
}

void DraftSchematicValues::setMaxPercentage(const String& attribute, float value) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);
		method.addAsciiParameter(attribute);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else
		((DraftSchematicValuesImplementation*) _impl)->setMaxPercentage(attribute, value);
}

void DraftSchematicValues::lockValue(const String& attribute) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);
		method.addAsciiParameter(attribute);

		method.executeWithVoidReturn();
	} else
		((DraftSchematicValuesImplementation*) _impl)->lockValue(attribute);
}

void DraftSchematicValues::resetValue(const String& attribute) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);
		method.addAsciiParameter(attribute);

		method.executeWithVoidReturn();
	} else
		((DraftSchematicValuesImplementation*) _impl)->resetValue(attribute);
}

float DraftSchematicValues::getCurrentValue(const String& attribute) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);
		method.addAsciiParameter(attribute);

		return method.executeWithFloatReturn();
	} else
		return ((DraftSchematicValuesImplementation*) _impl)->getCurrentValue(attribute);
}

float DraftSchematicValues::getCurrentValue(const int index) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);
		method.addSignedIntParameter(index);

		return method.executeWithFloatReturn();
	} else
		return ((DraftSchematicValuesImplementation*) _impl)->getCurrentValue(index);
}

float DraftSchematicValues::getCurrentPercentage(const String& attribute) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);
		method.addAsciiParameter(attribute);

		return method.executeWithFloatReturn();
	} else
		return ((DraftSchematicValuesImplementation*) _impl)->getCurrentPercentage(attribute);
}

float DraftSchematicValues::getCurrentPercentage(const int index) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 29);
		method.addSignedIntParameter(index);

		return method.executeWithFloatReturn();
	} else
		return ((DraftSchematicValuesImplementation*) _impl)->getCurrentPercentage(index);
}

float DraftSchematicValues::getCurrentPercentageAverage(const int index) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 30);
		method.addSignedIntParameter(index);

		return method.executeWithFloatReturn();
	} else
		return ((DraftSchematicValuesImplementation*) _impl)->getCurrentPercentageAverage(index);
}

float DraftSchematicValues::getCurrentPercentageAverage(const String& title) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 31);
		method.addAsciiParameter(title);

		return method.executeWithFloatReturn();
	} else
		return ((DraftSchematicValuesImplementation*) _impl)->getCurrentPercentageAverage(title);
}

float DraftSchematicValues::getMaxPercentage(const String& attribute) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 32);
		method.addAsciiParameter(attribute);

		return method.executeWithFloatReturn();
	} else
		return ((DraftSchematicValuesImplementation*) _impl)->getMaxPercentage(attribute);
}

float DraftSchematicValues::getMaxPercentage(const int index) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 33);
		method.addSignedIntParameter(index);

		return method.executeWithFloatReturn();
	} else
		return ((DraftSchematicValuesImplementation*) _impl)->getMaxPercentage(index);
}

float DraftSchematicValues::getMaxPercentageAverage(const int index) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 34);
		method.addSignedIntParameter(index);

		return method.executeWithFloatReturn();
	} else
		return ((DraftSchematicValuesImplementation*) _impl)->getMaxPercentageAverage(index);
}

int DraftSchematicValues::getValuesToSendSize() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 35);

		return method.executeWithSignedIntReturn();
	} else
		return ((DraftSchematicValuesImplementation*) _impl)->getValuesToSendSize();
}

int DraftSchematicValues::getTitleLine(String& title) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 36);
		method.addAsciiParameter(title);

		return method.executeWithSignedIntReturn();
	} else
		return ((DraftSchematicValuesImplementation*) _impl)->getTitleLine(title);
}

String& DraftSchematicValues::getValuesToSend(const int i) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 37);
		method.addSignedIntParameter(i);

		method.executeWithAsciiReturn(_return_getValuesToSend);
		return _return_getValuesToSend;
	} else
		return ((DraftSchematicValuesImplementation*) _impl)->getValuesToSend(i);
}

float DraftSchematicValues::getMinValue(const String& attribute) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 38);
		method.addAsciiParameter(attribute);

		return method.executeWithFloatReturn();
	} else
		return ((DraftSchematicValuesImplementation*) _impl)->getMinValue(attribute);
}

float DraftSchematicValues::getMaxValue(const String& attribute) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 39);
		method.addAsciiParameter(attribute);

		return method.executeWithFloatReturn();
	} else
		return ((DraftSchematicValuesImplementation*) _impl)->getMaxValue(attribute);
}

void DraftSchematicValues::setMinValue(const String& attribute, float value) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 40);
		method.addAsciiParameter(attribute);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else
		((DraftSchematicValuesImplementation*) _impl)->setMinValue(attribute, value);
}

void DraftSchematicValues::setMaxValue(const String& attribute, float value) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 41);
		method.addAsciiParameter(attribute);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else
		((DraftSchematicValuesImplementation*) _impl)->setMaxValue(attribute, value);
}

int DraftSchematicValues::getPrecision(const String& attribute) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 42);
		method.addAsciiParameter(attribute);

		return method.executeWithSignedIntReturn();
	} else
		return ((DraftSchematicValuesImplementation*) _impl)->getPrecision(attribute);
}

void DraftSchematicValues::setPrecision(const String& attribute, const int precision) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 43);
		method.addAsciiParameter(attribute);
		method.addSignedIntParameter(precision);

		method.executeWithVoidReturn();
	} else
		((DraftSchematicValuesImplementation*) _impl)->setPrecision(attribute, precision);
}

void DraftSchematicValues::recalculateValues(DraftSchematic* draftSchematic, bool initial) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 44);
		method.addObjectParameter(draftSchematic);
		method.addBooleanParameter(initial);

		method.executeWithVoidReturn();
	} else
		((DraftSchematicValuesImplementation*) _impl)->recalculateValues(draftSchematic, initial);
}

float DraftSchematicValues::getAttributeAndValue(String& attribute, const int i) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 45);
		method.addAsciiParameter(attribute);
		method.addSignedIntParameter(i);

		return method.executeWithFloatReturn();
	} else
		return ((DraftSchematicValuesImplementation*) _impl)->getAttributeAndValue(attribute, i);
}

void DraftSchematicValues::clearAll() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 46);

		method.executeWithVoidReturn();
	} else
		((DraftSchematicValuesImplementation*) _impl)->clearAll();
}

void DraftSchematicValues::clear() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 47);

		method.executeWithVoidReturn();
	} else
		((DraftSchematicValuesImplementation*) _impl)->clear();
}

void DraftSchematicValues::toString() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 48);

		method.executeWithVoidReturn();
	} else
		((DraftSchematicValuesImplementation*) _impl)->toString();
}

/*
 *	DraftSchematicValuesAdapter
 */

DraftSchematicValuesAdapter::DraftSchematicValuesAdapter(DraftSchematicValuesImplementation* obj) : ManagedObjectAdapter(obj) {
}

Packet* DraftSchematicValuesAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		addExperimentalProperty(inv->getAsciiParameter(_param0_addExperimentalProperty__String_String_float_float_int_bool_), inv->getAsciiParameter(_param1_addExperimentalProperty__String_String_float_float_int_bool_), inv->getFloatParameter(), inv->getFloatParameter(), inv->getSignedIntParameter(), inv->getBooleanParameter());
		break;
	case 7:
		resp->insertAscii(getExperimentalPropertySubtitle(inv->getSignedIntParameter()));
		break;
	case 8:
		resp->insertAscii(getExperimentalPropertySubtitle(inv->getAsciiParameter(_param0_getExperimentalPropertySubtitle__String_int_), inv->getSignedIntParameter()));
		break;
	case 9:
		resp->insertAscii(getExperimentalPropertyTitle(inv->getAsciiParameter(_param0_getExperimentalPropertyTitle__String_)));
		break;
	case 10:
		resp->insertAscii(getExperimentalPropertyTitle(inv->getSignedIntParameter()));
		break;
	case 11:
		resp->insertAscii(getVisibleExperimentalPropertyTitle(inv->getSignedIntParameter()));
		break;
	case 12:
		resp->insertAscii(getExperimentalPropertySubtitlesTitle(inv->getSignedIntParameter()));
		break;
	case 13:
		resp->insertSignedInt(getExperimentalPropertySubtitleSize());
		break;
	case 14:
		resp->insertSignedInt(getExperimentalPropertySubtitleSize(inv->getAsciiParameter(_param0_getExperimentalPropertySubtitleSize__String_)));
		break;
	case 15:
		resp->insertSignedInt(getVisibleExperimentalPropertyTitleSize());
		break;
	case 16:
		resp->insertSignedInt(getExperimentalPropertyTitleSize());
		break;
	case 17:
		resp->insertBoolean(hasProperty(inv->getAsciiParameter(_param0_hasProperty__String_)));
		break;
	case 18:
		resp->insertBoolean(isHidden(inv->getAsciiParameter(_param0_isHidden__String_)));
		break;
	case 19:
		setCurrentValue(inv->getAsciiParameter(_param0_setCurrentValue__String_float_), inv->getFloatParameter());
		break;
	case 20:
		setCurrentValue(inv->getAsciiParameter(_param0_setCurrentValue__String_float_float_float_), inv->getFloatParameter(), inv->getFloatParameter(), inv->getFloatParameter());
		break;
	case 21:
		setCurrentPercentage(inv->getAsciiParameter(_param0_setCurrentPercentage__String_float_), inv->getFloatParameter());
		break;
	case 22:
		setCurrentPercentage(inv->getAsciiParameter(_param0_setCurrentPercentage__String_float_float_float_), inv->getFloatParameter(), inv->getFloatParameter(), inv->getFloatParameter());
		break;
	case 23:
		setMaxPercentage(inv->getAsciiParameter(_param0_setMaxPercentage__String_float_), inv->getFloatParameter());
		break;
	case 24:
		lockValue(inv->getAsciiParameter(_param0_lockValue__String_));
		break;
	case 25:
		resetValue(inv->getAsciiParameter(_param0_resetValue__String_));
		break;
	case 26:
		resp->insertFloat(getCurrentValue(inv->getAsciiParameter(_param0_getCurrentValue__String_)));
		break;
	case 27:
		resp->insertFloat(getCurrentValue(inv->getSignedIntParameter()));
		break;
	case 28:
		resp->insertFloat(getCurrentPercentage(inv->getAsciiParameter(_param0_getCurrentPercentage__String_)));
		break;
	case 29:
		resp->insertFloat(getCurrentPercentage(inv->getSignedIntParameter()));
		break;
	case 30:
		resp->insertFloat(getCurrentPercentageAverage(inv->getSignedIntParameter()));
		break;
	case 31:
		resp->insertFloat(getCurrentPercentageAverage(inv->getAsciiParameter(_param0_getCurrentPercentageAverage__String_)));
		break;
	case 32:
		resp->insertFloat(getMaxPercentage(inv->getAsciiParameter(_param0_getMaxPercentage__String_)));
		break;
	case 33:
		resp->insertFloat(getMaxPercentage(inv->getSignedIntParameter()));
		break;
	case 34:
		resp->insertFloat(getMaxPercentageAverage(inv->getSignedIntParameter()));
		break;
	case 35:
		resp->insertSignedInt(getValuesToSendSize());
		break;
	case 36:
		resp->insertSignedInt(getTitleLine(inv->getAsciiParameter(_param0_getTitleLine__String_)));
		break;
	case 37:
		resp->insertAscii(getValuesToSend(inv->getSignedIntParameter()));
		break;
	case 38:
		resp->insertFloat(getMinValue(inv->getAsciiParameter(_param0_getMinValue__String_)));
		break;
	case 39:
		resp->insertFloat(getMaxValue(inv->getAsciiParameter(_param0_getMaxValue__String_)));
		break;
	case 40:
		setMinValue(inv->getAsciiParameter(_param0_setMinValue__String_float_), inv->getFloatParameter());
		break;
	case 41:
		setMaxValue(inv->getAsciiParameter(_param0_setMaxValue__String_float_), inv->getFloatParameter());
		break;
	case 42:
		resp->insertSignedInt(getPrecision(inv->getAsciiParameter(_param0_getPrecision__String_)));
		break;
	case 43:
		setPrecision(inv->getAsciiParameter(_param0_setPrecision__String_int_), inv->getSignedIntParameter());
		break;
	case 44:
		recalculateValues((DraftSchematic*) inv->getObjectParameter(), inv->getBooleanParameter());
		break;
	case 45:
		resp->insertFloat(getAttributeAndValue(inv->getAsciiParameter(_param0_getAttributeAndValue__String_int_), inv->getSignedIntParameter()));
		break;
	case 46:
		clearAll();
		break;
	case 47:
		clear();
		break;
	case 48:
		toString();
		break;
	default:
		return NULL;
	}

	return resp;
}

void DraftSchematicValuesAdapter::addExperimentalProperty(const String& subtitle, const String& title, float min, float max, const int precision, const bool filler) {
	return ((DraftSchematicValuesImplementation*) impl)->addExperimentalProperty(subtitle, title, min, max, precision, filler);
}

String& DraftSchematicValuesAdapter::getExperimentalPropertySubtitle(const int i) {
	return ((DraftSchematicValuesImplementation*) impl)->getExperimentalPropertySubtitle(i);
}

String& DraftSchematicValuesAdapter::getExperimentalPropertySubtitle(const String& title, const int i) {
	return ((DraftSchematicValuesImplementation*) impl)->getExperimentalPropertySubtitle(title, i);
}

String& DraftSchematicValuesAdapter::getExperimentalPropertyTitle(const String& subtitle) {
	return ((DraftSchematicValuesImplementation*) impl)->getExperimentalPropertyTitle(subtitle);
}

String& DraftSchematicValuesAdapter::getExperimentalPropertyTitle(const int i) {
	return ((DraftSchematicValuesImplementation*) impl)->getExperimentalPropertyTitle(i);
}

String& DraftSchematicValuesAdapter::getVisibleExperimentalPropertyTitle(const int i) {
	return ((DraftSchematicValuesImplementation*) impl)->getVisibleExperimentalPropertyTitle(i);
}

String& DraftSchematicValuesAdapter::getExperimentalPropertySubtitlesTitle(const int i) {
	return ((DraftSchematicValuesImplementation*) impl)->getExperimentalPropertySubtitlesTitle(i);
}

int DraftSchematicValuesAdapter::getExperimentalPropertySubtitleSize() {
	return ((DraftSchematicValuesImplementation*) impl)->getExperimentalPropertySubtitleSize();
}

int DraftSchematicValuesAdapter::getExperimentalPropertySubtitleSize(const String& title) {
	return ((DraftSchematicValuesImplementation*) impl)->getExperimentalPropertySubtitleSize(title);
}

int DraftSchematicValuesAdapter::getVisibleExperimentalPropertyTitleSize() {
	return ((DraftSchematicValuesImplementation*) impl)->getVisibleExperimentalPropertyTitleSize();
}

int DraftSchematicValuesAdapter::getExperimentalPropertyTitleSize() {
	return ((DraftSchematicValuesImplementation*) impl)->getExperimentalPropertyTitleSize();
}

bool DraftSchematicValuesAdapter::hasProperty(const String& attribute) {
	return ((DraftSchematicValuesImplementation*) impl)->hasProperty(attribute);
}

bool DraftSchematicValuesAdapter::isHidden(const String& attribute) {
	return ((DraftSchematicValuesImplementation*) impl)->isHidden(attribute);
}

void DraftSchematicValuesAdapter::setCurrentValue(const String& attribute, float value) {
	return ((DraftSchematicValuesImplementation*) impl)->setCurrentValue(attribute, value);
}

void DraftSchematicValuesAdapter::setCurrentValue(const String& attribute, float value, float min, float max) {
	return ((DraftSchematicValuesImplementation*) impl)->setCurrentValue(attribute, value, min, max);
}

void DraftSchematicValuesAdapter::setCurrentPercentage(const String& attribute, float value) {
	return ((DraftSchematicValuesImplementation*) impl)->setCurrentPercentage(attribute, value);
}

void DraftSchematicValuesAdapter::setCurrentPercentage(const String& attribute, float value, float min, float max) {
	return ((DraftSchematicValuesImplementation*) impl)->setCurrentPercentage(attribute, value, min, max);
}

void DraftSchematicValuesAdapter::setMaxPercentage(const String& attribute, float value) {
	return ((DraftSchematicValuesImplementation*) impl)->setMaxPercentage(attribute, value);
}

void DraftSchematicValuesAdapter::lockValue(const String& attribute) {
	return ((DraftSchematicValuesImplementation*) impl)->lockValue(attribute);
}

void DraftSchematicValuesAdapter::resetValue(const String& attribute) {
	return ((DraftSchematicValuesImplementation*) impl)->resetValue(attribute);
}

float DraftSchematicValuesAdapter::getCurrentValue(const String& attribute) {
	return ((DraftSchematicValuesImplementation*) impl)->getCurrentValue(attribute);
}

float DraftSchematicValuesAdapter::getCurrentValue(const int index) {
	return ((DraftSchematicValuesImplementation*) impl)->getCurrentValue(index);
}

float DraftSchematicValuesAdapter::getCurrentPercentage(const String& attribute) {
	return ((DraftSchematicValuesImplementation*) impl)->getCurrentPercentage(attribute);
}

float DraftSchematicValuesAdapter::getCurrentPercentage(const int index) {
	return ((DraftSchematicValuesImplementation*) impl)->getCurrentPercentage(index);
}

float DraftSchematicValuesAdapter::getCurrentPercentageAverage(const int index) {
	return ((DraftSchematicValuesImplementation*) impl)->getCurrentPercentageAverage(index);
}

float DraftSchematicValuesAdapter::getCurrentPercentageAverage(const String& title) {
	return ((DraftSchematicValuesImplementation*) impl)->getCurrentPercentageAverage(title);
}

float DraftSchematicValuesAdapter::getMaxPercentage(const String& attribute) {
	return ((DraftSchematicValuesImplementation*) impl)->getMaxPercentage(attribute);
}

float DraftSchematicValuesAdapter::getMaxPercentage(const int index) {
	return ((DraftSchematicValuesImplementation*) impl)->getMaxPercentage(index);
}

float DraftSchematicValuesAdapter::getMaxPercentageAverage(const int index) {
	return ((DraftSchematicValuesImplementation*) impl)->getMaxPercentageAverage(index);
}

int DraftSchematicValuesAdapter::getValuesToSendSize() {
	return ((DraftSchematicValuesImplementation*) impl)->getValuesToSendSize();
}

int DraftSchematicValuesAdapter::getTitleLine(String& title) {
	return ((DraftSchematicValuesImplementation*) impl)->getTitleLine(title);
}

String& DraftSchematicValuesAdapter::getValuesToSend(const int i) {
	return ((DraftSchematicValuesImplementation*) impl)->getValuesToSend(i);
}

float DraftSchematicValuesAdapter::getMinValue(const String& attribute) {
	return ((DraftSchematicValuesImplementation*) impl)->getMinValue(attribute);
}

float DraftSchematicValuesAdapter::getMaxValue(const String& attribute) {
	return ((DraftSchematicValuesImplementation*) impl)->getMaxValue(attribute);
}

void DraftSchematicValuesAdapter::setMinValue(const String& attribute, float value) {
	return ((DraftSchematicValuesImplementation*) impl)->setMinValue(attribute, value);
}

void DraftSchematicValuesAdapter::setMaxValue(const String& attribute, float value) {
	return ((DraftSchematicValuesImplementation*) impl)->setMaxValue(attribute, value);
}

int DraftSchematicValuesAdapter::getPrecision(const String& attribute) {
	return ((DraftSchematicValuesImplementation*) impl)->getPrecision(attribute);
}

void DraftSchematicValuesAdapter::setPrecision(const String& attribute, const int precision) {
	return ((DraftSchematicValuesImplementation*) impl)->setPrecision(attribute, precision);
}

void DraftSchematicValuesAdapter::recalculateValues(DraftSchematic* draftSchematic, bool initial) {
	return ((DraftSchematicValuesImplementation*) impl)->recalculateValues(draftSchematic, initial);
}

float DraftSchematicValuesAdapter::getAttributeAndValue(String& attribute, const int i) {
	return ((DraftSchematicValuesImplementation*) impl)->getAttributeAndValue(attribute, i);
}

void DraftSchematicValuesAdapter::clearAll() {
	return ((DraftSchematicValuesImplementation*) impl)->clearAll();
}

void DraftSchematicValuesAdapter::clear() {
	return ((DraftSchematicValuesImplementation*) impl)->clear();
}

void DraftSchematicValuesAdapter::toString() {
	return ((DraftSchematicValuesImplementation*) impl)->toString();
}

/*
 *	DraftSchematicValuesHelper
 */

DraftSchematicValuesHelper* DraftSchematicValuesHelper::staticInitializer = DraftSchematicValuesHelper::instance();

DraftSchematicValuesHelper::DraftSchematicValuesHelper() {
	className = "DraftSchematicValues";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void DraftSchematicValuesHelper::finalizeHelper() {
	DraftSchematicValuesHelper::finalize();
}

DistributedObject* DraftSchematicValuesHelper::instantiateObject() {
	return new DraftSchematicValues(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* DraftSchematicValuesHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new DraftSchematicValuesAdapter((DraftSchematicValuesImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	DraftSchematicValuesServant
 */

DraftSchematicValuesServant::DraftSchematicValuesServant() : ManagedObjectImplementation() {
	_classHelper = DraftSchematicValuesHelper::instance();
}

DraftSchematicValuesServant::~DraftSchematicValuesServant() {
}

void DraftSchematicValuesServant::_setStub(DistributedObjectStub* stub) {
	_this = (DraftSchematicValues*) stub;
	ManagedObjectServant::_setStub(stub);
}

DistributedObjectStub* DraftSchematicValuesServant::_getStub() {
	return _this;
}

