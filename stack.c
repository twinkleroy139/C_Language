#include <stdio.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int value) {
    if (top < MAX_SIZE - 1) {
        stack[++top] = value;
    } else {
        printf("Stack overflow: Cannot push %d\n", value);
    }
}

int pop() {
    if (top >= 0) {
        return stack[top--];
    } else {
        printf("Stack is empty: Cannot pop\n");
        return -1; // You can choose a different error code if needed
    }
}

int peek() {
    if (top >= 0) {
        return stack[top];
    } else {
        printf("Stack is empty: Cannot peek\n");
        return -1; // You can choose a different error code if needed
    }
}

int main() {
    push(10);
    push(20);
    push(30);

    printf("Peek: %d\n", peek()); // Peek the top element
    printf("Pop: %d\n", pop());   // Pop the top element

    printf("Peek: %d\n", peek()); // Peek the top element after popping

    return 0;
}