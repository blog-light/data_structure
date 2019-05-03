#ifndef NODE_H
#define NODE_H


typedef struct _data {
        char          *key;
        int            value;
} DATA;

typedef struct _node {
        struct _data  *data;
        struct _node  *prev;
        struct _node  *next;
} NODE;

NODE   *head, *tail;

void   initNode ();
int    isEmpty  ();

NODE * findNode   (const DATA *target);
void   insertNode (NODE *target, NODE *input);
NODE * removeNode (NODE *target);

#endif