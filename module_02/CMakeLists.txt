cmake_minimum_required(VERSION 3.0.0)
project(Calc_Pj VERSION 1.0.0)

add_library(my_Math
addition.cpp
division.cpp
)

add_library(my_Print
print.cpp
)

add_executable(
    Calculator
    main.cpp    
)

add_executable(
    Calculator_02
    main.cpp    
)

target_link_libraries(Calculator PUBLIC my_Math my_Print)
target_link_libraries(Calculator_02 PUBLIC my_Math my_Print)