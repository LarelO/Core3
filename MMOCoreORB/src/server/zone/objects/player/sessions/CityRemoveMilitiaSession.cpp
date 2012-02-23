/*
 *	server/zone/objects/player/sessions/CityRemoveMilitiaSession.cpp generated by engine3 IDL compiler 0.60
 */

#include "CityRemoveMilitiaSession.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/region/CityRegion.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/structure/StructureObject.h"

#include "server/zone/managers/structure/StructureManager.h"

/*
 *	CityRemoveMilitiaSessionStub
 */

enum {RPC_GETMILITIAID__ = 6,RPC_INITIALIZESESSION__,RPC_CANCELSESSION__,RPC_CLEARSESSION__};

CityRemoveMilitiaSession::CityRemoveMilitiaSession(CreatureObject* creature, CityRegion* city, unsigned long long militiaid, SceneObject* terminal) : Facade(DummyConstructorParameter::instance()) {
	CityRemoveMilitiaSessionImplementation* _implementation = new CityRemoveMilitiaSessionImplementation(creature, city, militiaid, terminal);
	_impl = _implementation;
	_impl->_setStub(this);
}

CityRemoveMilitiaSession::CityRemoveMilitiaSession(DummyConstructorParameter* param) : Facade(param) {
}

CityRemoveMilitiaSession::~CityRemoveMilitiaSession() {
}



unsigned long long CityRemoveMilitiaSession::getMilitiaID() {
	CityRemoveMilitiaSessionImplementation* _implementation = static_cast<CityRemoveMilitiaSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETMILITIAID__);

		return method.executeWithUnsignedLongReturn();
	} else
		return _implementation->getMilitiaID();
}

int CityRemoveMilitiaSession::initializeSession() {
	CityRemoveMilitiaSessionImplementation* _implementation = static_cast<CityRemoveMilitiaSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZESESSION__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->initializeSession();
}

int CityRemoveMilitiaSession::cancelSession() {
	CityRemoveMilitiaSessionImplementation* _implementation = static_cast<CityRemoveMilitiaSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CANCELSESSION__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->cancelSession();
}

int CityRemoveMilitiaSession::clearSession() {
	CityRemoveMilitiaSessionImplementation* _implementation = static_cast<CityRemoveMilitiaSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CLEARSESSION__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->clearSession();
}

DistributedObjectServant* CityRemoveMilitiaSession::_getImplementation() {

	_updated = true;
	return _impl;
}

void CityRemoveMilitiaSession::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	CityRemoveMilitiaSessionImplementation
 */

CityRemoveMilitiaSessionImplementation::CityRemoveMilitiaSessionImplementation(DummyConstructorParameter* param) : FacadeImplementation(param) {
	_initializeImplementation();
}


CityRemoveMilitiaSessionImplementation::~CityRemoveMilitiaSessionImplementation() {
}


void CityRemoveMilitiaSessionImplementation::finalize() {
}

void CityRemoveMilitiaSessionImplementation::_initializeImplementation() {
	_setClassHelper(CityRemoveMilitiaSessionHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void CityRemoveMilitiaSessionImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<CityRemoveMilitiaSession*>(stub);
	FacadeImplementation::_setStub(stub);
}

DistributedObjectStub* CityRemoveMilitiaSessionImplementation::_getStub() {
	return _this;
}

CityRemoveMilitiaSessionImplementation::operator const CityRemoveMilitiaSession*() {
	return _this;
}

void CityRemoveMilitiaSessionImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void CityRemoveMilitiaSessionImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void CityRemoveMilitiaSessionImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void CityRemoveMilitiaSessionImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void CityRemoveMilitiaSessionImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void CityRemoveMilitiaSessionImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void CityRemoveMilitiaSessionImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void CityRemoveMilitiaSessionImplementation::_serializationHelperMethod() {
	FacadeImplementation::_serializationHelperMethod();

	_setClassName("CityRemoveMilitiaSession");

}

void CityRemoveMilitiaSessionImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(CityRemoveMilitiaSessionImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool CityRemoveMilitiaSessionImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (FacadeImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "creatureObject") {
		TypeInfo<ManagedWeakReference<CreatureObject* > >::parseFromBinaryStream(&creatureObject, stream);
		return true;
	}

	if (_name == "cityRegion") {
		TypeInfo<ManagedWeakReference<CityRegion* > >::parseFromBinaryStream(&cityRegion, stream);
		return true;
	}

	if (_name == "terminalObject") {
		TypeInfo<ManagedWeakReference<SceneObject* > >::parseFromBinaryStream(&terminalObject, stream);
		return true;
	}

	if (_name == "militiaID") {
		TypeInfo<unsigned long long >::parseFromBinaryStream(&militiaID, stream);
		return true;
	}


	return false;
}

void CityRemoveMilitiaSessionImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = CityRemoveMilitiaSessionImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int CityRemoveMilitiaSessionImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "creatureObject";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedWeakReference<CreatureObject* > >::toBinaryStream(&creatureObject, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "cityRegion";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedWeakReference<CityRegion* > >::toBinaryStream(&cityRegion, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "terminalObject";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedWeakReference<SceneObject* > >::toBinaryStream(&terminalObject, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "militiaID";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<unsigned long long >::toBinaryStream(&militiaID, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 4 + FacadeImplementation::writeObjectMembers(stream);
}

CityRemoveMilitiaSessionImplementation::CityRemoveMilitiaSessionImplementation(CreatureObject* creature, CityRegion* city, unsigned long long militiaid, SceneObject* terminal) {
	_initializeImplementation();
	// server/zone/objects/player/sessions/CityRemoveMilitiaSession.idl():  		Logger.setLoggingName("CityRemoveMilitiaSession");
	Logger::setLoggingName("CityRemoveMilitiaSession");
	// server/zone/objects/player/sessions/CityRemoveMilitiaSession.idl():  		Logger.setLogging(true);
	Logger::setLogging(true);
	// server/zone/objects/player/sessions/CityRemoveMilitiaSession.idl():  		creatureObject = creature;
	creatureObject = creature;
	// server/zone/objects/player/sessions/CityRemoveMilitiaSession.idl():  		cityRegion = city;
	cityRegion = city;
	// server/zone/objects/player/sessions/CityRemoveMilitiaSession.idl():  		terminalObject = terminal;
	terminalObject = terminal;
	// server/zone/objects/player/sessions/CityRemoveMilitiaSession.idl():  		militiaID = militiaid;
	militiaID = militiaid;
}

unsigned long long CityRemoveMilitiaSessionImplementation::getMilitiaID() {
	// server/zone/objects/player/sessions/CityRemoveMilitiaSession.idl():  		return militiaID;
	return militiaID;
}

int CityRemoveMilitiaSessionImplementation::cancelSession() {
	// server/zone/objects/player/sessions/CityRemoveMilitiaSession.idl():  		creatureObject.dropActiveSession(SessionFacadeType.CITYMILITIA);
	creatureObject->dropActiveSession(SessionFacadeType::CITYMILITIA);
	// server/zone/objects/player/sessions/CityRemoveMilitiaSession.idl():  		return 0;
	return 0;
}

int CityRemoveMilitiaSessionImplementation::clearSession() {
	// server/zone/objects/player/sessions/CityRemoveMilitiaSession.idl():  		return 0;
	return 0;
}

/*
 *	CityRemoveMilitiaSessionAdapter
 */

CityRemoveMilitiaSessionAdapter::CityRemoveMilitiaSessionAdapter(CityRemoveMilitiaSession* obj) : FacadeAdapter(obj) {
}

Packet* CityRemoveMilitiaSessionAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_GETMILITIAID__:
		resp->insertLong(getMilitiaID());
		break;
	case RPC_INITIALIZESESSION__:
		resp->insertSignedInt(initializeSession());
		break;
	case RPC_CANCELSESSION__:
		resp->insertSignedInt(cancelSession());
		break;
	case RPC_CLEARSESSION__:
		resp->insertSignedInt(clearSession());
		break;
	default:
		return NULL;
	}

	return resp;
}

unsigned long long CityRemoveMilitiaSessionAdapter::getMilitiaID() {
	return (static_cast<CityRemoveMilitiaSession*>(stub))->getMilitiaID();
}

int CityRemoveMilitiaSessionAdapter::initializeSession() {
	return (static_cast<CityRemoveMilitiaSession*>(stub))->initializeSession();
}

int CityRemoveMilitiaSessionAdapter::cancelSession() {
	return (static_cast<CityRemoveMilitiaSession*>(stub))->cancelSession();
}

int CityRemoveMilitiaSessionAdapter::clearSession() {
	return (static_cast<CityRemoveMilitiaSession*>(stub))->clearSession();
}

/*
 *	CityRemoveMilitiaSessionHelper
 */

CityRemoveMilitiaSessionHelper* CityRemoveMilitiaSessionHelper::staticInitializer = CityRemoveMilitiaSessionHelper::instance();

CityRemoveMilitiaSessionHelper::CityRemoveMilitiaSessionHelper() {
	className = "CityRemoveMilitiaSession";

	Core::getObjectBroker()->registerClass(className, this);
}

void CityRemoveMilitiaSessionHelper::finalizeHelper() {
	CityRemoveMilitiaSessionHelper::finalize();
}

DistributedObject* CityRemoveMilitiaSessionHelper::instantiateObject() {
	return new CityRemoveMilitiaSession(DummyConstructorParameter::instance());
}

DistributedObjectServant* CityRemoveMilitiaSessionHelper::instantiateServant() {
	return new CityRemoveMilitiaSessionImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* CityRemoveMilitiaSessionHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new CityRemoveMilitiaSessionAdapter(static_cast<CityRemoveMilitiaSession*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}
