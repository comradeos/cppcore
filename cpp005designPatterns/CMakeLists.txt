cmake_minimum_required(VERSION 3.26)
project(cpp005designPatterns)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpp005designPatterns main.cpp
        modules/001_test.h
        modules/002_inheritance.h
        modules/003_glyph.h
        modules/004_AbstractFactory.h
        modules/005_Builder.h
        modules/006_FactoryMethod.h)
