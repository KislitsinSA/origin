cmake_minimum_required(VERSION 3.22.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED true)

project(Exceptions_in_Constructors_cmake)

add_executable(Exceptions_in_Constructors_cmake main.cpp equilateralTriangle.cpp Figure.cpp isoscelesTriangle.cpp Parallelogram.cpp Quadrilateral.cpp Rectangle.cpp Rhomb.cpp rightTriangle.cpp Square.cpp Triangle.cpp)