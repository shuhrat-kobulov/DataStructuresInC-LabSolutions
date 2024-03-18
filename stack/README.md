# Stack in C

## What is Stack?

- A stack in C refers to a linear data structure that allows the insertion of a new element and deletion of an existing element at the same end which is depicted as the top of the stack.

- For stack implementation, the pointer must be maintained at the top of the stack, i.e., the last element to be inserted in the stack. You can access the elements only at the top of the stack.

- The concept of the stack is widely used in backtracking, expression evaluation, recursion, and execution of other data structures like queues.

## Operations on Stack

- The following operations can be performed on a stack:

  - **Push**: This operation is used to insert an element into the stack. The insertion is done at the top of the stack.

  - **Pop**: This operation is used to delete an element from the stack. The deletion is done from the top of the stack.

  - **Peek or Top**: This operation is used to access the element at the top of the stack without removing it.

  - **isEmpty**: This operation is used to check whether the stack is empty or not. If the stack is empty, it returns true; otherwise, it returns false.

  - **isFull**: This operation is used to check whether the stack is full or not. If the stack is full, it returns true; otherwise, it returns false.

## Time Complexity of Stack Operations

- The time complexity of stack operations is O(1).

## Types of Stacks

- There are two types of stacks:

  - **Fixed-size Stack**: In this type of stack, the size of the stack is fixed. Once the stack is full, you cannot insert any element into the stack.

  - **Dynamic Stack**: In this type of stack, the size of the stack is not fixed. You can insert any number of elements into the stack.
