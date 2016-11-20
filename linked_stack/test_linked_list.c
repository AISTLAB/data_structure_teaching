#include "linked_stack.h"
#include <stdio.h>

int main() {
    PSTACK s = create_stack();
    push(s,100);
    printf("%d\n", s->top->data);
    push(s,111);
    printf("%d\n", s->top->data);
    if(!is_empty(s))printf("%d\n", peek(s));
    pop(s);
    if(!is_empty(s))printf("%d\n", peek(s));
    pop(s);
    if(!is_empty(s))printf("%d\n", peek(s));
    return 0;
}