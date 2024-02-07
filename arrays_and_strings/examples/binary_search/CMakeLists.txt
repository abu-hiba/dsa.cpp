cmake_minimum_required(VERSION 3.28)

project(BinarySearchCPP LANGUAGES CXX)

include_directories(../../../include/)

add_executable(BinarySearch main.cpp ../../../include/utils/printarray.hpp)
