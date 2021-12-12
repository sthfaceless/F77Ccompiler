#!/bin/bash
PROJECT_DIR=$(pwd)

input_file=$1
if [ -z "${input_file}" ]
then
  input_file="${PROJECT_DIR}/example.dev"
fi

output_file=$2
if [ -z "${output_file}" ]
then
  output_file="${PROJECT_DIR}/example.cdev"
fi

"${PROJECT_DIR}/lexer" < "${input_file}" > "${output_file}"
bash "${PROJECT_DIR}/scripts/clean.sh"