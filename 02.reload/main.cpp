#pragma once

#include <lua.hpp>
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv) {
	int status, result;
	lua_State *L;
	L = luaL_newstate();
	luaL_openlibs(L);
	status = luaL_loadfile(L, "main.lua");

	if (status) {
		fprintf(stderr, "Couldn't load file: %s\n", lua_tostring(L, -1));
		exit(1);
	}
	result = lua_pcall(L, 0, LUA_MULTRET, 0);

	if (result) {
		fprintf(stderr, "Failed to run script: %s\n", lua_tostring(L, -1));
		exit(1);
	}
	
	lua_close(L);
	return 0;
}