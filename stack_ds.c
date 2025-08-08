// Stacks
#include "stack_ds.h"

// Initialize a Stack data structure
void initialize(Stack *stack) {
    stack -> top = -1;
}

// Inserts an element at the top of the stack
void push(Stack *stack, int data) {
    if (isFull(stack)) {
        printf("Stack Overflow!\n");
        return;
    }
    stack -> arr[++stack -> top] = data;
}

// Removes the top most element of the stack and return it
int pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow!\n");
        return -1;
    }
    int data = peek(stack);
    stack -> top--;
    return data;
}

// Returns the top most element of the stack
int peek(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is Empty!\n");
        return -1;
    }
    return stack -> arr[stack -> top];
}

// Returns true if the stack is full, otherwise returns false
bool isFull(Stack *stack) {
    return stack -> top == MAX_SIZE - 1;
}

// Returns true if te stack is empty, otherwise returns false
bool isEmpty(Stack *stack) {
    return stack -> top == -1;
}
