cmake_minimum_required(VERSION 3.6)
project(listing_1_2)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90 -Wall -Werror -pedantic")

set(SOURCE_FILES main.c)
add_executable(listing_1_2 ${SOURCE_FILES})
target_link_libraries(listing_1_2 m)