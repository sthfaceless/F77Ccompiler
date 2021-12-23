#!/bin/bash
PROJECT_DIR=$(pwd)

input_file=$1
if [ -z "${input_file}" ]
then
  input_file="${PROJECT_DIR}/example.f"
fi

output_file=$2
if [ -z "${output_file}" ]
then
  output_file="${PROJECT_DIR}/example.c"
fi

"${PROJECT_DIR}/cmake-build-debug/lexer" < "${input_file}" > "${output_file}"