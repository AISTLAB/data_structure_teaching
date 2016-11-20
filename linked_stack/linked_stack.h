//
// Created by winxos on 2016-11-20.
//

#ifndef DATA_STRUCTURE_TEACHING_LINKED_STACK_H_H
#define DATA_STRUCTURE_TEACHING_LINKED_STACK_H_H

typedef int DATA_TYPE;
struct NODE {
    DATA_TYPE data;
    struct NODE *before;
} NODE;
struct STACK {
    struct NODE *top;
} STACK;

typedef struct STACK *PSTACK;
typedef struct NODE *PNODE;

PSTACK create_stack();

int is_empty(PSTACK s);

int push(PSTACK s, DATA_TYPE n);

int pop(PSTACK s);

DATA_TYPE peek(PSTACK s);
#endif //DATA_STRUCTURE_TEACHING_LINKED_STACK_H_H
