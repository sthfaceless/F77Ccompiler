#!/bin/bash
PROJECT_DIR=$(pwd)
bison -o "${PROJECT_DIR}/src/f77parser.c" -d "${PROJECT_DIR}/f77parser.y"
flex -o "${PROJECT_DIR}/src/f77lexer.c" "${PROJECT_DIR}/f77lexer.l"
gcc -o "${PROJECT_DIR}/lexer" "${PROJECT_DIR}/src/functions.c" "${PROJECT_DIR}/src/f77parser.h" "${PROJECT_DIR}/src/f77lexer.c" -lfl