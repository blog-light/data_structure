#ifndef STACK_H
#define STACK_H

#include "node.h"


NODE   *top;

void   initStack ();

void   push (DATA *input);
NODE * pop  ();

#endif
