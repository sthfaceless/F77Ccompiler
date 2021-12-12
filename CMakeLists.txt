cmake_minimum_required(VERSION 3.17)
project(F77Ccompiler CXX)

set(CMAKE_CXX_STANDARD 17)

add_executable(F77Ccompiler src/defs.h src/f77lexer.c src/f77parser.c src/functions.h src/functions.cpp)
include_directories(src)