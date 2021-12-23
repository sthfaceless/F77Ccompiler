//
// Created by danil on 29.11.2021.
//

#include <algorithm>
#include <utility>
#include "utils.h"

string replace_all(string str, string from, string to) {
    if (from.empty())
        return str;
    size_t start_pos = 0;
    while ((start_pos = str.find(from, start_pos)) != string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length();
    }
    return str;
}

string substring(string str, int l, int r) {
    if (l < 0) l = str.size() + l;
    if (r < 0) r = str.size() + r;
    if (r < str.size() - 1) str.erase(str.begin() + r + 1, str.end());
    if (l > 0) str.erase(str.begin(), str.begin() + l);
    return str;
}

string binary_string_to_int(string str) {
    long long val = 0;
    for (int i = str.size() - 1; i >= 0; --i) {
        if (str[i] == '1') val++;
        val *= 2;
    }
    return *(new string(to_string(val)));
}

char *get_lower_copy(const char *_str) {
    char *str = strdup(_str);
    for (char *tmp = str; *tmp; tmp++) *tmp = tolower(*tmp);
    return str;
}


static inline void ltrim(string &s) {
    s.erase(s.begin(), find_if(s.begin(), s.end(), [](unsigned char ch) {
        return !isspace(ch);
    }));
}

static inline void rtrim(string &s) {
    s.erase(find_if(s.rbegin(), s.rend(), [](unsigned char ch) {
        return !isspace(ch);
    }).base(), s.end());
}

static inline void trim(string &s) {
    ltrim(s);
    rtrim(s);
}

string parse_bool(const char *name) {
    char *str = get_lower_copy(name);
    if (!strcmp(str, ".true.")) {
        return "1";
    } else {
        return "0";
    }
}

string &process_comment(string &comm) {
    trim(comm);
    if (comm.empty()) {
        return comm;
    }
    if (comm[0] == 'c' || comm[0] == '!') {
        comm[0] = '/';
        comm.insert(comm.begin(), '/');
    }
    return comm;
}