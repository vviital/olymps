cmake_minimum_required(VERSION 3.3)
project(crypto_grodno)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp test.cpp task3.cpp task6.cpp task7.cpp task8.cpp task9.cpp task10.cpp)
add_executable(crypto_grodno ${SOURCE_FILES})