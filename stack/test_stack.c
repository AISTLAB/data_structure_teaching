#include <stdio.h>
#include "stack.h"

int main() {
    PSTACK s = create_stack(3);
    push(s, 10);
    printf("%d\n", peek(s));
    push(s, 11);
    printf("%d\n", peek(s));
    push(s,12);
    if(!push(s,13))
    {
        puts("stack is full.");
    }
    pop(s);
    pop(s);
    pop(s);
    if (!is_empty(s))printf("%d\n", peek(s));
    else puts("stack is empty");
    return 0;
}