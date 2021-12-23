//
// Created by danil on 29.11.2021.
//

#ifndef F77CCOMPILER_UTILS_H
#define F77CCOMPILER_UTILS_H

#include <cstring>

using namespace std;

string parse_bool(const char *name);

string replace_all(string str, string from, string to);

string substring(string str, int l, int r);

string binary_string_to_int(string str);

string &process_comment(string &comm);

char *get_lower_copy(const char *_str);

static inline void ltrim(string &s);

static inline void rtrim(string &s);

static inline void trim(string &s);

#endif //F77CCOMPILER_UTILS_H
