cmake_minimum_required(VERSION 3.17)
project(F77Ccompiler C CXX)

set(CMAKE_CXX_STANDARD 17)

set_source_files_properties(src/f77parser.c src/f77lexer.c PROPERTIES LANGUAGE CXX)
#set_source_files_properties(f77.h PROPERTIES LANGUAGE C)

add_executable(lexer src/classes.cpp src/classes.h src/defs.h src/f77parser.h src/f77lexer.c src/f77parser.c src/utils.h src/utils.cpp src/debug.h src/global.h)
include_directories(src)