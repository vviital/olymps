cmake_minimum_required(VERSION 3.3)
project(vkr1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp taskA.cpp taskB.cpp)
add_executable(vkr1 ${SOURCE_FILES})