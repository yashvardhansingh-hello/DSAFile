#include <stdio.h>
#include <stdlib.h> /* for exit() */
#include <ctype.h>  /* for isdigit(char ) */
#include <string.h>

#define SIZE 100

char stack[SIZE];
int top = -1;

void push(char item)
{
    if (top >= SIZE - 1)
    {
        printf("\nStack Overflow.");
    }
    else
    {
        top++;
        stack[top] = item;
    }
}

char pop()
{
    char item;

    if (top < 0)
    {
        printf("stack under flow: invalid infix expression");
    }
    else
    {
        item = stack[top];
        top = top - 1;
        return (item);
    }
}

int is_operator(char symbol)
{
    if (symbol == '^' || symbol == '*' || symbol == '/' || symbol == '+' || symbol == '-')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int precedence(char symbol)
{
    if (symbol == '^')
    {
        return (3);
    }
    else if (symbol == '*' || symbol == '/')
    {
        return (2);
    }
    else if (symbol == '+' || symbol == '-')
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

void InfixToPostfix(char infix_exp[], char postfix_exp[])
{
    int i = 0;
    int j = 0;
    char item;
    char x;

    push('(');
    strcat(infix_exp, ")");

    item = infix_exp[i];

    while (item != '\0')
    {
        if (item == '(')
        {
            push(item);
        }
        else if (isdigit(item) || isalpha(item))
        {
            postfix_exp[j] = item;
            j++;
        }
        else if (is_operator(item) == 1)
        {
            x = pop();
            while (is_operator(x) == 1 && precedence(x) >= precedence(item))
            {
                postfix_exp[j] = x;
                j++;
                x = pop();
            }
            push(x);
            push(item);
        }
        else if (item == ')')
        {
            x = pop();
            while (x != '(')
            {
                postfix_exp[j] = x;
                j++;
                x = pop();
            }
        }
        else
        {
            printf("\nInvalid infix Expression.\n");
            getchar();
            exit(1);
        }
        i++;

        item = infix_exp[i];
    }
    if (top > 0)
    {
        printf("\nInvalid infix Expression.\n"); /* the it is illegeal  symbol */
        getchar();
        exit(1);
    }

    postfix_exp[j] = '\0';
}

void infixToPrefix(char infix[], char prefix[])
{
    // int s = strlen(infix);
    strrev(infix);
    for (int i = 0; infix[i] != '\0'; i++)
    {
        if(infix[i]=='('){
            infix[i] = ')';
        }
        if(infix[i]==')'){
            infix[i] = '(';
        }
    }
    InfixToPostfix(infix, prefix);
    strrev(prefix);
    // prefix[s] = '\0';
}

/* main function begins */
void main()
{
    printf("Name: Yash Vardhan Singh\nRegistration Number: 220011015002\n");
    char infix[SIZE], prefix[SIZE];
    printf("\nEnter Infix expression : ");
    scanf("%s", infix);

    infixToPrefix(infix, prefix);
    printf("Prefix Expression: ");
    puts(prefix);
}
