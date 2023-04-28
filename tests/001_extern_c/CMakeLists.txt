cmake_minimum_required(VERSION 3.25)
project(001_extern_c)

set(CMAKE_CXX_STANDARD 17)

add_executable(001_extern_c main.cpp cfile.c)
