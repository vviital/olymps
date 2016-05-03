cmake_minimum_required(VERSION 3.3)
project(vkcup0)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp taskA.cpp taskB.cpp taskC.cpp taskD.cpp)
add_executable(vkcup0 ${SOURCE_FILES})