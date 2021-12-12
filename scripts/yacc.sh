#!/bin/bash
PROJECT_DIR=$(pwd)
bison -o "${PROJECT_DIR}/src/f77parser.c" "${PROJECT_DIR}/f77parser.y" --report=all