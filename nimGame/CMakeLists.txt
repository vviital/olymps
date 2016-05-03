cmake_minimum_required(VERSION 3.3)
project(nimGame)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp "1465. Pawn Game.cpp" acm.sgu.ru.problem328.cpp SnarkHunt.cpp informatics.368.cpp informatics.369.cpp informatics.370.cpp informatics.371.cpp informatics.373.cpp informatics.1014.cpp informatics.2976.cpp informatics.565.cpp informatics.649.cpp informatics.112708.cpp cf.gym.100136.I.cpp)
add_executable(nimGame ${SOURCE_FILES})