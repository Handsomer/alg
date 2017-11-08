cmake_minimum_required(VERSION 3.8)
project(untitled)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Sort.cpp alg_lib.h)
add_executable(alg ${SOURCE_FILES})
