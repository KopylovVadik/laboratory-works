cmake_minimum_required(VERSION 3.6)
project(laba_1)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90 -Wall -Werror -pedantic")

set(SOURCE_FILES main.c)
add_executable(laba_1 ${SOURCE_FILES})
target_link_libraries(laba_1 m)