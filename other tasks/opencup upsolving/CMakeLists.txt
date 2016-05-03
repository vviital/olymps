cmake_minimum_required(VERSION 3.3)
project(opencup_upsolving)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp taskI.cpp taskA.cpp school_olypm_day_1_task_D.cpp)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${dir}")
set(CMAKE_WORKING_DIRECTORY "${dir}")
add_executable(opencup_upsolving ${SOURCE_FILES})