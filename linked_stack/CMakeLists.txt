cmake_minimum_required(VERSION 3.6)
project(data_structure_teaching)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES test_linked_list.c linked_stack.h linked_stack.c)
add_executable(data_structure_teaching ${SOURCE_FILES})