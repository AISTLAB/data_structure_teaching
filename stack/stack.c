//
// Created by winxos on 2016-11-20.
//

#include "stack.h"
#include <malloc.h>


PSTACK create_stack(int n) {
    PSTACK s = (PSTACK) malloc(sizeof(STACK));
    s->BUF = (DATA_TYPE *) malloc(sizeof(DATA_TYPE) * n);
    s->max_len = n;
    s->ptop = 0;
    return s;
}

int is_empty(PSTACK s) {
    return (s->ptop == 0);
}

int is_full(PSTACK s) {
    return s->ptop >= s->max_len;
}

int push(PSTACK s, DATA_TYPE n) {
    if (is_full(s))return 0;
    s->BUF[s->ptop++] = n;
    return 1;
}

int pop(PSTACK s) {
    if (is_empty(s))return 0;
    s->BUF[s->ptop - 1] = 0;
    s->ptop--;
    return 1;
}

DATA_TYPE peek(PSTACK s) {
    return s->BUF[s->ptop - 1];
}