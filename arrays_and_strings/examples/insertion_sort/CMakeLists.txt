cmake_minimum_required(VERSION 3.28)

project(InsertionSortCPP LANGUAGES CXX)

include_directories(../../../include/)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(InsertionSort main.cpp ../../../include/utils/printarray.hpp)
