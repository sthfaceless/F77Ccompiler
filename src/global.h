//
// Created by danil on 22.12.2021.
//

#ifndef F77CCOMPILER_GLOBAL_H
#define F77CCOMPILER_GLOBAL_H

#include "classes.h"

root_node program_root = *new root_node();
extern root_node program_root;

void translate_program() {
    cout << program_root.eval(new scope_chain());
}

#endif //F77CCOMPILER_GLOBAL_H
