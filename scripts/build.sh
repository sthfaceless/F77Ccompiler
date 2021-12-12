#!/bin/bash
PROJECT_DIR=$(pwd)
bison -o "${PROJECT_DIR}/src/f77parser.c" "${PROJECT_DIR}/f77parser.y" --report=all
flex -o "${PROJECT_DIR}/src/f77lexer.c" "${PROJECT_DIR}/f77lexer.l"
g++ -o "${PROJECT_DIR}/lexer" "${PROJECT_DIR}/src/defs.h"\
 "${PROJECT_DIR}/src/functions.cpp" "${PROJECT_DIR}/src/functions.h"\
  "${PROJECT_DIR}/src/f77parser.c"  "${PROJECT_DIR}/src/f77lexer.c"