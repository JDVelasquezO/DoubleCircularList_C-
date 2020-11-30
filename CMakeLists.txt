cmake_minimum_required(VERSION 3.17)
project(test1)

set(CMAKE_CXX_STANDARD 14)

add_executable(test1 main.cpp Pet.cpp Pet.h Node.cpp Node.h List.cpp List.h)