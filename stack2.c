#include<stdio.h>
#define size 100

int stack[size];
int top = -1;

void push(int value)
{
    if(top < size - 1)
    {
        stack[top++] = value;
    }
    else
    {
        printf("stack overflow: cannot push %d\n", value);
    }
};

int pop()
{
    if(top >= 0)
    {
        return stack[top--];
    }
    else
    {
        printf("Stack is empty: cannot pop\n");
        return -1;
    }
}

int main()
{
    push(10);
    pop(20);

    // printf("Push: %d\n\n", push());
    printf("Pop: %d\n\n", pop());  
    return 0;
}