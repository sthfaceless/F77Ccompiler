//
// Created by danil on 22.12.2021.
//

#ifndef F77CCOMPILER_GLOBAL_H
#define F77CCOMPILER_GLOBAL_H

#include "classes.h"

root_node program_root = *new root_node();
extern root_node program_root;

void translate_program(vector<node *> &_head) {
    block_node* container = new block_node();
    container->chain = new scope_chain();
    for (node *_child: _head) {
        _child->ask(container);
    }
    container->chain->add_scope(container->local_scope);
    cout << program_root.eval(container->chain);
}

#endif //F77CCOMPILER_GLOBAL_H
