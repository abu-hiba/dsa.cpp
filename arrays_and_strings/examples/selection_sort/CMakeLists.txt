cmake_minimum_required(VERSION 3.28)

project(SelectionSortCPP LANGUAGES CXX)

include_directories(../../../include/)

add_executable(SelectionSort main.cpp ../../../include/utils/printarray.hpp)
