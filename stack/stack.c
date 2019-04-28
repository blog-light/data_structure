#include "stack.h"

void
push(DATA *input) {
	insertNode(tail, input);
}

void
pop() {
	removeNode(tail->prev);
}