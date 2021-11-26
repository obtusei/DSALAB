#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAXSIZE 50

struct stack
{
    int top;
    int items[MAXSIZE];
};

typedef struct stack STACK;

void initStack(STACK *s)
{
    s->top = -1;
}

bool isEmpty(STACK *s)
{
    if (s->top == -1)
        return true;
    else
        return false;
}

bool isFull(STACK *s)
{
    if (s->top == MAXSIZE - 1)
        return true;
    else
        return false;
}

void push(STACK *s, int item)
{
    if (isFull(s))
    {
        printf("Stack is full\n");
        return;
    }
    else
    {
        s->top++;
        s->items[s->top] = item;
    }
}

int pop(STACK *s)
{
    if (isEmpty(s))
    {
        printf("Stack is empty\n");
        return -1;
    }
    else
    {
        int item = s->items[s->top];
        s->top--;
        return item;
    }
}

int stackTop(STACK *s)
{
    if (isEmpty(s))
    {
        printf("Stack is empty\n");
        return -1;
    }
    else
    {
        return s->items[s->top];
    }
}

void printStack(STACK *s)
{
    if (isEmpty(s))
    {
        printf("Stack is empty\n");
        return;
    }
    else
    {
        int i;
        printf("\n");
        for (i = 0; i <= s->top; i++)
            printf("%d ", s->items[i]);
        printf("\n");
        printf("\n");
    }
}

int main()
{
    int choice, item;
    int flag = 1;
    STACK st;
    STACK *s = &st;
    initStack(s);
    while (flag)
    {
        printf("Following choices:\n");
        printf("1. Push\n2. Pop\n3. Top\n4. Print\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the item to be pushed: ");
            scanf("%d", &item);
            push(s, item);
            break;
        case 2:
            item = pop(s);
            if (item != -1)
                printf("Popped item: %d\n", item);
            break;
        case 3:
            item = stackTop(s);
            if (item != -1)
                printf("Top item: %d\n", item);
            break;
        case 4:
            printStack(s);
            break;
        case 5:
            flag = 0;
            break;
        default:
            printf("Wrong choice\n");
        }
    }
}