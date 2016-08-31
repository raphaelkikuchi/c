cmake_minimum_required(VERSION 3.6)
project(scratch_01)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES scratch.c)
add_executable(scratch_01 ${SOURCE_FILES})