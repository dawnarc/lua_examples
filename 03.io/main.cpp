#pragma once

#include <lua.hpp>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main(int argc, char **argv) {
    if(argc > 1){
        lua_State *L = luaL_newstate();
        luaL_openlibs(L);
        if(luaL_dofile(L, argv[1]))
            std::cerr << lua_tostring(L, -1);
        lua_close(L);
    }
    else{
        std::cerr << "Expected filename from command line!";
    }
    return 0;
}