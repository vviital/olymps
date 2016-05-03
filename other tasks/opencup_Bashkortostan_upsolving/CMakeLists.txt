cmake_minimum_required(VERSION 3.3)
project(opencup_Bashkortostan_upsolving)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp taskA.cpp taskJ.cpp taskF.cpp cf325div2E.cpp)
add_executable(opencup_Bashkortostan_upsolving ${SOURCE_FILES})