cmake_minimum_required(VERSION 3.23)
project(PriorityQueue VERSION 1.0 DESCRIPTION "An implementation of a priority queue using C++ heap")

set(CMAKE_CXX_STANDARD 20)

add_executable(${PROJECT_NAME}
        src/main.cpp
        src/priority_queue.h)
