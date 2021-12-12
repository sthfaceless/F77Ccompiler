//
// Created by danil on 29.11.2021.
//

#include "functions.h"

void dfs(const node *v, int d = 0) {
    if (v->childs.empty()) {
        cout << v->type;
        return;
    }
    string pref;
    for (int i = 0; i < d; ++i) {
        pref.push_back(' ');
    }
    cout << pref << v->type << ": {";
    for (const node *child: v->childs) {
        dfs(child, d + 1);
        cout << "," << endl;
    }
    cout << pref << "}" << endl;
}

void translate_program(node *begin, node *mid, node *end) {
    node *root = new node();
    root->childs = {begin, mid, end};
    dfs(root);
}


string &replace_all(string &str, const string &from, const string &to) {
    if (from.empty())
        return str;
    size_t start_pos = 0;
    while ((start_pos = str.find(from, start_pos)) != string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length();
    }
    return str;
}

string &substring(string &str, int l, int r) {
    if (l < 0) l = str.size() + l;
    if (r < 0) r = str.size() + r;
    if (r < str.size() - 1) str.erase(str.begin() + r + 1, str.end());
    if (l > 0) str.erase(str.begin(), str.begin() + l - 1);
    return str;
}

string &binary_string_to_int(string &str) {
    long long val = 0;
    for (unsigned long long i = str.size() - 1; i >= 0; --i) {
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

data_type parse_type(const char *name) {
    char *str = get_lower_copy(name);
    if (!strcmp(str, "integer")) {
        return integer;
    } else if (!strcmp(str, "real")) {
        return real;
    } else if (!strcmp(str, "logical")) {
        return boolean;
    } else if (!strcmp(str, "double precision")) {
        return double_precision;
    } else if (!strcmp(str, "complex")) {
        return complex;
    } else if (!strcmp(str, "double complex")) {
        return double_complex;
    } else if (!strcmp(str, "character")) {
        return chars;
    } else if (!strcmp(str, "byte")) {
        return byte_type;
    }
    throw runtime_error("bad data type - " + string(str));
}

bool parse_bool(const char *name) {
    char *str = get_lower_copy(name);
    if (!strcmp(str, ".true.")) {
        return true;
    } else {
        return false;
    }
}
