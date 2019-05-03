#include "node.h"
#include "stack.h"


void
initStack () {
    initNode();
    top = tail;
}

void
push (DATA *input) {
    NODE *in = (NODE *)calloc(1, sizeof(NODE));
    in->data = input;
    insertNode(top, in);
}

NODE *
pop () {
    return removeNode(top->prev);
}