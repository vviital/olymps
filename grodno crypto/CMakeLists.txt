cmake_minimum_required(VERSION 3.3)
project(grodno_crypto)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp taskA.cpp taskB.cpp taskC.cpp taskD.cpp taskE.cpp taskG.cpp taskF.cpp task11.cpp task10.cpp)
add_executable(grodno_crypto ${SOURCE_FILES})