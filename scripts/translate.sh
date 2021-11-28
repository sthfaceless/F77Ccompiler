#!/bin/bash
PROJECT_DIR=$(pwd)
"${PROJECT_DIR}/lexer" < "${PROJECT_DIR}/example.f"
bash "${PROJECT_DIR}/scripts/clean.sh"