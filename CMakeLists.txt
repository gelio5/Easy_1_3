cmake_minimum_required(VERSION 3.15)
project(Easy_1_3)
set(CMAKE_CXX_STANDARD 14)

#add_executable(Easy_1_3 src/Sin.cpp src/Sin.h src/tests/test.cpp)
add_subdirectory(src)
add_subdirectory(gtest)
