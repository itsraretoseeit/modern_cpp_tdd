cmake_minimum_required(VERSION 3.16)
project(Chapter2Ex1)

add_definitions(-std=c++17)
set(CMAKE_CXX_FLAGS "${CMAXE_CXX_FLAGS} -Wall")

link_directories(/opt/homebrew/lib)
include_directories(/opt/homebrew/include)
set(sources 
   test/main.cpp 
   test/SoundexTest.cpp
   src/CharUtils.cpp
   src/StringUtils.cpp
   )
add_executable(test ${sources})
target_link_libraries(test pthread)
target_link_libraries(test gtest)

