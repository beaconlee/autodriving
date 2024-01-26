cmake_minimum_required(VERSION 3.16)
set(CMAKE_CXX_COMPILER "clang++")

project(beginning_autodriving)


set(CLANG_DEFAULT_RTLIB "compiler-rt")
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(DLLDB_EXPORT_ALL_SYMBOLS ON)
set(CMAKE_BUILD_TYPE Debug) 
set(DLLDB_EXPORT_ALL_SYMBOLS ON) 
SET(CMAKE_CXX_DEBUG_ARGUMENTS "--interpreter=mi")


include_directories(${CMAKE_SOURCE_DIR}/third_party)
include_directories(${CMAKE_SOURCE_DIR}/include)


add_subdirectory(${CMAKE_SOURCE_DIR}/src/sdl2/demo)