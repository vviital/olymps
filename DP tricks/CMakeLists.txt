cmake_minimum_required(VERSION 3.3)
project(DP_trickes)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp cats.cpp nkleaves.cpp cf190_taskE.cpp acm.zju.edu.cn_problemId1860.cpp "[IOI] Guardians of the Lunatics.cpp" cf79E.cpp)
add_executable(DP_trickes ${SOURCE_FILES})