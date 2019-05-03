#include <stdio.h>
#include <stdlib.h>

#include "node.h"


void
initNode () {
    head = (NODE *)calloc(1, sizeof(NODE));
    tail = (NODE *)calloc(1, sizeof(NODE));
    
    head->prev = head;
    tail->next = tail;
    
    head->next = tail;
    tail->prev = head;
}

int
isEmpty () {
    return head->next == tail;
}

NODE *
findNode (const DATA *target) {
    if (isEmpty())
        return NULL;
    
    NODE *start = head;
    while ( (start = start->next) != tail ) {
        if ( !strcmp(target->key, start->data->key) )
            return start;
    }
}

void
insertNode (NODE *target, NODE *input) {
    input->prev = target->prev;
    input->next = target;
    
    target->prev->next = input;
    target->prev = input;
}

NODE *
removeNode (NODE *target) {
    if (isEmpty())
        return NULL;
    
    NODE *rmNode = (NODE *)calloc(1, sizeof(NODE));
    memcpy(rmNode, target, sizeof(target));
    
    target->next->prev = target->prev;
    target->prev->next = target->next;
    
    free(target);
    return rmNode;
}