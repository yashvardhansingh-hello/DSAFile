#include <stdio.h>

void main()
{
    printf("Name: Yash Vardhan Singh\nRegistration Number: 220011015002\n");

    char str[30];
    printf("Enter an Expresssion: ");
    scanf("%s", str);
    int x = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '(')
        {
            x++;
        }
        else if (str[i] == ')')
        {
            x--;
            if (x < 0)
            {
                break;
            }
        }
    }

    if (x == 0)
    {
        printf("The Parenthesis are balanced.");
    }
    else
    {
        printf("The Parenthesis are not Balanced.");
    }
}