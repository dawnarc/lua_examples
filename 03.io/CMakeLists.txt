cmake_minimum_required(VERSION 3.5)

set(MY_PROJECT_NAME TestIO)

set(PROJECT_ROOT_PATH "./")

add_subdirectory(./../Lua build_lua)

add_executable(${MY_PROJECT_NAME} ${PROJECT_ROOT_PATH}/main.cpp)

target_link_libraries(${MY_PROJECT_NAME} lua_static)

target_include_directories(${MY_PROJECT_NAME} PUBLIC ./../Lua/lua-5.4.4/include/)

#set(EXECUTABLE_OUTPUT_PATH  "./../")