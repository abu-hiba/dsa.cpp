cmake_minimum_required(VERSION 3.28)

project(IsArraySubsetCPP LANGUAGES CXX)

include_directories(../../../include)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(IsArraySubset main.cpp ../../../include/utils/readvector.hpp)
