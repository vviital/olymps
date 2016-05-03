cmake_minimum_required(VERSION 3.3)
project(bsuir_open_quatrofinal)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp taskE.cpp taskC.cpp taskG.cpp taskH.cpp taskI.cpp taskD.cpp taskB.cpp taskA.cpp taskJ.cpp taskF.cpp taskK.cpp)
add_executable(bsuir_open_quatrofinal ${SOURCE_FILES})