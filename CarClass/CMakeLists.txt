cmake_minimum_required(VERSION 3.27)
project(CarClass)

set(CMAKE_CXX_STANDARD 17)

add_executable(CarClass main.cpp
        Car.cpp
        Car.h)
