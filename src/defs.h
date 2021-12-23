//
// Created by danil on 05.12.2021.
//

#ifndef F77CCOMPILER_DEFS_H
#define F77CCOMPILER_DEFS_H

#include <string>
#include <vector>

#include "classes.h"

typedef struct {
    std::string _str;
    constant_node* _constant;
    node *_node;
    block_node *_block;
    std::vector<node *> _items;
    list_node *_list;
    data_type _type;
    complex_type *_complex_type;
    eval_tree *_eval_tree;
    bool _bool;
} YYSTYPE;
#define YYSTYPE YYSTYPE

extern YYSTYPE yylval;

#endif
