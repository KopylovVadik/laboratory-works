cmake_minimum_required(VERSION 3.6)
project(listing15)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90 -Wall -Werror -pedantic")

set(SOURCE_FILES main.c)
add_executable(listing15 ${SOURCE_FILES})
target_link_libraries(listing15 m)