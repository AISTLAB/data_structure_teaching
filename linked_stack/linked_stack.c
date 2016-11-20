//
// Created by winxos on 2016-11-20.
//

#include "linked_stack.h"
#include <malloc.h>

PSTACK create_stack() {
    PSTACK s = (PSTACK) malloc(sizeof(STACK));
    s->top = NULL;
    return s;
}

int is_empty(PSTACK s) {
    return (s->top == NULL);
}

int push(PSTACK s, DATA_TYPE n) {
    PNODE p = (PNODE) malloc(sizeof(NODE));
    if (p == NULL)return 0;//failed to malloc memory
    p->data = n;
    p->before = s->top;
    s->top = p;
    return 1;
}

int pop(PSTACK s) {
    if (is_empty(s))return 0;
    PNODE p;
    p = s->top;
    s->top = p->before;
    free(p);
    return 1;
}

DATA_TYPE peek(PSTACK s)
{
    return s->top->data;
}
