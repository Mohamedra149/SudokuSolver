cmake_minimum_required(VERSION 3.21)
project(Sudoku)

set(CMAKE_CXX_STANDARD 11)

add_library(Sudoku SudokuSolver.cpp)
