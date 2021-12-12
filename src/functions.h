//
// Created by danil on 29.11.2021.
//

#ifndef F77CCOMPILER_FUNCTIONS_H
#define F77CCOMPILER_FUNCTIONS_H

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

#include "defs.h"

void translate_program();

data_type parse_type(const char *name);

bool parse_bool(const char *name);

string& replace_all(string &str, const string &from, const string &to);

string& substring(string &str, int l,  int r);
string& binary_string_to_int(string &str);

#endif //F77CCOMPILER_FUNCTIONS_H
