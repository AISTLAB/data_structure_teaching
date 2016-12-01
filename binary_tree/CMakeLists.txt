cmake_minimum_required(VERSION 3.6)
project(binary_tree)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(EXECUTABLE_OUTPUT_PATH "./bin")
set(SOURCE_FILES test_binary_tree.c binary_tree.c binary_tree.h)
add_executable(binary_tree ${SOURCE_FILES})