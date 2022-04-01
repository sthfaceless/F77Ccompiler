#!/bin/bash
PROJECT_DIR=$(pwd)
bison -o "${PROJECT_DIR}/src/f77parser.c" "${PROJECT_DIR}/f77parser.y" -d --report=all
flex -o "${PROJECT_DIR}/src/f77lexer.c" "${PROJECT_DIR}/f77lexer.l"
#cmake --build "${PROJECT_DIR}/cmake-build-debug" --target lexer
rm -f "${PROJECT_DIR}/lexer"
g++ -o "${PROJECT_DIR}/lexer" "${PROJECT_DIR}/src/classes.cpp" "${PROJECT_DIR}/src/classes.h"\
 "${PROJECT_DIR}/src/defs.h" "${PROJECT_DIR}/src/f77parser.h" "${PROJECT_DIR}/src/f77lexer.c" \
 "${PROJECT_DIR}/src/f77parser.c" "${PROJECT_DIR}/src/utils.h" "${PROJECT_DIR}/src/utils.cpp" \
 "${PROJECT_DIR}/src/debug.h" "${PROJECT_DIR}/src/global.h" -lm