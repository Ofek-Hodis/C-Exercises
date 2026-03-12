cmake_minimum_required(VERSION 3.13)
project(my_project C)  # Or CXX for C++

set(CMAKE_C_STANDARD 11)  # C standard

add_executable(main_target TD1.cpp second_target TD2.cpp)  # List ALL your .c/.cpp files here