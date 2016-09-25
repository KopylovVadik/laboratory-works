cmake_minimum_required(VERSION 3.6)
project(Variant_21)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90 -Wall -Werror -pedantic")

set(SOURCE_FILES main.c)
add_executable(Variant_21 ${SOURCE_FILES})
target_link_libraries(Variant_21 m)