cmake_minimum_required(VERSION 3.28)

project(ArrayIntersectionCPP LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(../../../include/)

add_executable(
  ArrayIntersection solution.cpp ../../../include/utils/printvector.hpp
                    ../../../include/utils/readvector.hpp)
