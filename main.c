#include <stdio.h>
#include "stack_ds.h"

int main() {
    /* stack = LIFO data structure. Last-In First-Out
               stores objects into a sort of "vertical tower"
               push() to add to the top
               pop() to remove from the top
    */

    Stack stack;
    initialize(&stack);  

    push(&stack, 3);
    printf("Top element: %d\n", peek(&stack));

    push(&stack, 5);
    printf("Top element: %d\n", peek(&stack));

    push(&stack, 2);
    printf("Top element: %d\n", peek(&stack));

    push(&stack, 8);
    printf("Top element: %d\n\n", peek(&stack));

    while (!isEmpty(&stack)) {
        printf("Top element: %d\n", peek(&stack));
        printf("Popped element: %d\n", pop(&stack));
    }
    return 0;
}