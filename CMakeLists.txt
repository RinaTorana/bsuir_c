cmake_minimum_required(VERSION 3.7)
project(bsuir_c)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        Lab1/Lab2_1.cpp
        Lab1/Lab2_2.cpp
        Lab1/Lab2_3.cpp
        Lab1/Lab2_4.cpp
        Lab1/Lab2_5.cpp
        Lab2/lab.cpp
        Lab2/MainFile.cpp
        Lab3/Lab3_1.cpp
        "Lab3/Lab3_2(1).cpp"
        "Lab3/Lab3_2(2).cpp"
        "Lab3/Lab3_2(3).cpp"
        "Lab4/Lab4_1(not function).cpp"
        Lab4/Lab4_1.cpp
        Lab4/Lab4_1.h
        Lab4/Lab4_2.cpp
        Lab4/Lab4_2.h
        Lab5/Lab5_1.cpp
        Lab6_Cpp/main.cpp)

add_executable(bsuir_c ${SOURCE_FILES})