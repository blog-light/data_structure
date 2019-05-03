#ifndef NODE_H
#define NODE_H

#include "node.h"


NODE   *top;

void   initStack ();

void   push (DATA *input);
NODE * pop  ();

#endif