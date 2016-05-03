cmake_minimum_required(VERSION 3.3)
project(contest_2016)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp taskA.cpp taskB.cpp taskC.cpp taskD.cpp taskE.cpp task512.cpp task159.cpp)
add_executable(contest_2016 ${SOURCE_FILES})