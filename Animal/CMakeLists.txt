cmake_minimum_required(VERSION 3.27)
project(Tmp3)

set(CMAKE_CXX_STANDARD 17)

add_executable(Tmp3 main.cpp
        Animal.cpp
        Animal.h
        Dog.h
        Cat.h)
