#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

// Define the Stack structure
typedef struct {
    int items[MAX_SIZE];
    int top;
} Stack;

// Function to initialize the stack
void initStack(Stack *s) {
    s->top = -1;
}

// Function to add an item to the stack
int push(Stack *s, int item) {
    if (s->top == (MAX_SIZE - 1)) {
        printf("Stack is full. Unable to push %d.\n", item);
        return -1; // Return an error code
    }
    s->top++;
    s->items[s->top] = item;
    return 0; // Success
}

// Function to remove an item from the stack
int pop(Stack *s) {
    if (s->top == -1) {
        printf("Stack is empty.\n");
        exit(1); // Exit the program with an error
    }
    return s->items[s->top--]; // Return the top item and decrement the top index
}

// Main function to test the stack
int main() {
    Stack s;
    initStack(&s);

    push(&s, 10); // Push 10 to stack
    push(&s, 20); // Push 20 to stack
    push(&s, 30); // Push 30 to stack

    printf("Popped: %d\n", pop(&s)); // Pop and print
    printf("Popped: %d\n", pop(&s)); // Pop and print

    return 0;
}
