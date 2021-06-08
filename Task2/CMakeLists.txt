cmake_minimum_required(VERSION 3.19)
project(Task25n2)

set(CMAKE_CXX_STANDARD 14)

add_executable(Task25n2 main.cpp header.h cpu.cpp disk.cpp gpu.cpp keyboard.cpp ram.cpp)