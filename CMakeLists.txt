cmake_minimum_required(VERSION 2.8)

enable_language(CXX)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x -Wall -static-libstdc++ -static-libgcc")

project(cross-test)
add_executable(${PROJECT_NAME} "main.cpp")
