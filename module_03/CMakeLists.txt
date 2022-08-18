cmake_minimum_required(VERSION 3.0.0)
project(Calc_Pj VERSION 1.0.0)

add_subdirectory(myMath)
add_subdirectory(myPrint)

add_executable(
    Calculator
    main.cpp    
)

target_link_libraries(Calculator PUBLIC my_Math my_Print)
