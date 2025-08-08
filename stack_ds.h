#ifndef STACK_DS_H
#define STACK_DS_H

#include <stdbool.h>
#include <stdio.h>

#define MAX_SIZE 100

typedef struct {
    int arr[MAX_SIZE]; // Data to be stored
    int top; // Pointer to the last-in element
} Stack; // The Stack data structure

void initialize(Stack *stack);
bool isFull(Stack *stack);
bool isEmpty(Stack *stack);
void push(Stack *stack, int data);
int pop(Stack *stack);
int peek(Stack *stack);

#endif