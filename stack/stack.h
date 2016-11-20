//
// Created by winxos on 2016-11-20.
//

#ifndef STACK_STACK_H
#define STACK_STACK_H
typedef int DATA_TYPE;
typedef struct {
    DATA_TYPE *BUF;
    int ptop;
    int max_len;
} STACK;
typedef STACK *PSTACK;

PSTACK create_stack(int n);

int is_empty(PSTACK s);

int push(PSTACK s, DATA_TYPE n);

int pop(PSTACK s);

DATA_TYPE peek(PSTACK s);

#endif //STACK_STACK_H
