/*
 * LuaTangibleObject.cpp
 *
 *  Created on: 24/01/2012
 *      Author: xyborn
 */

#include "LuaTangibleObject.h"
#include "TangibleObject.h"

const char LuaTangibleObject::className[] = "LuaTangibleObject";

Luna<LuaTangibleObject>::RegType LuaTangibleObject::Register[] = {
		{ "_setObject", &LuaSceneObject::_setObject },
		{ "setOptionsBitmask", &LuaTangibleObject::setOptionsBitmask },
		{ 0, 0 }
};

LuaTangibleObject::LuaTangibleObject(lua_State *L) : LuaSceneObject(L) {
	realObject = static_cast<TangibleObject*>(lua_touserdata(L, 1));
}

LuaTangibleObject::~LuaTangibleObject(){
}

int LuaTangibleObject::setOptionsBitmask(lua_State* L) {
	uint32 bitmask = lua_tointeger(L, -1);

	realObject->setOptionsBitmask(bitmask, true);

	return 0;
}