cmake_minimum_required(VERSION 3.6)
project(listing9)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(listing9 ${SOURCE_FILES})