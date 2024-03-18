#include <stdio.h>
#include <stdbool.h>
 
#define size_limit 100
 
typedef struct {
  int data[size_limit];
  int top_element;
} Stack;
 
void initialize(Stack* stack) {
  stack->top_element = -1;
}
 
bool isFull(Stack* stack) {
  return stack->top_element == size_limit - 1;
}
 
bool isEmpty(Stack* stack) {
  return stack->top_element == -1;
}
 
void push(Stack* stack, int value) {
  if (isFull(stack)) {
    printf("Stack is overflow! It cannot push element anymore %d.\n", value);
  } else {
    stack->top_element++;
    stack->data[stack->top_element] = value;
    printf("The stack has pushed element %d into the stack.\n", value);
  }
}
 
int pop(Stack* stack) {
  if (isEmpty(stack)) {
    printf("Stack is underflow! It cannot pop out element from an empty stack.\n");
    return -1; // returns a sentinel value or corrects error uniquely
  } else {
    int value = stack->data[stack->top_element];
    stack->top_element--;
    printf("The stack has popped element %d from the stack.\n", value);
    return value;
  }
}

int peek(Stack* stack) {
  if (isEmpty(stack)) {
    printf("The stack is empty.\n");
    return -1;
  } else {
    return stack->data[stack->top_element];
  }
}
 
int main() {
  Stack stack;
  initialize(&stack);

  push(&stack, 10);
  push(&stack, 20);
  push(&stack, 30);

  printf("The top element of the stack is %d\n", peek(&stack));

  pop(&stack);
  pop(&stack);
  pop(&stack);
  pop(&stack); // these commands pop out the elements from an empty stack

  return 0;
}