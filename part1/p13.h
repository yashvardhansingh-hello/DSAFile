#include <stdio.h>
#define SIZE 10

struct stack
{
    int top;
    char arr[SIZE];
};

int pop(struct stack *stk)
{
    if (stk->top == -1)
    {
        printf("Stack Underflow!");
        return -1;
    }
    else
    {
        return stk->arr[stk->top--];
    }
}

void push(struct stack *stk, int value)
{
    if (stk->top == SIZE - 1)
    {
        printf("Stack Overflow!");
    }
    else
    {
        stk->top++;
        stk->arr[stk->top] = value;
    }
}

void printStack(struct stack *stk)
{
    printf("The Entire Stack: \t");
    for (int i = 0; i <= stk->top; i++)
    {
        printf("%d ", stk->arr[i]);
    }
    printf("\n");
}
