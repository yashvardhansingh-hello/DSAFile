#include <stdio.h>
#define SIZE 10

struct stack
{
    int top;
    int arr[SIZE];
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
    }printf("\n");
}

void main()
{
    printf("Name: Yash Vardhan Singh\nRegistration Number: 220011015002\n");
    struct stack stk;
    stk.top = -1;
    pop(&stk);
    push(&stk, 1);
    push(&stk, 7);
    push(&stk, 5);
    printStack(&stk);
    printf("The Removed Element: %d\n", pop(&stk));
    printStack(&stk);
}
