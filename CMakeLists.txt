cmake_minimum_required(VERSION 4.1)
project(untitled2 C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_executable(TP1_1 TP1_first_part.c)

add_executable(TP1_2 TP1_second_part.c)

add_executable(binary_search binary_search.c
        TP_recursivite.c)

add_executable(racine_newton racine_newton.c)

add_executable(TD4 TD4.c)

add_executable(sort_functions sort_functions.c)

add_executable(TD5 TD5.c)

add_executable(C2TD03 C2TD03.c)

add_executable(C2TP1 C2TP1.c)

add_executable(TP_recursivite TP_recursivite.c)

add_executable(TP_pointeurs TP_pointeurs.c)
