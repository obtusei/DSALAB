#include <stdio.h>
#include <stdlib.h>

// Program to evalute postfix expression
int stack[20];
int top = -1;

void push(int x)
{
    stack[++top] = x;
}

int pop()
{
    return stack[top--];
}