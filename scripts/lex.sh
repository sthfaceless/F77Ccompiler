#!/bin/bash
PROJECT_DIR=$(pwd)
flex -o "${PROJECT_DIR}/src/f77lexer.c" "${PROJECT_DIR}/f77lexer.l"