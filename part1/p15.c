#include <stdio.h>

void main()
{
    printf("Name: Yash Vardhan Singh\nRegistration Number: 220011015002\n");
    char str[] = "Hello Everybody. Kya Hal Chal.";
    int length = 0;
    int j = 0;

    while (str[length] != '\0')
    {
        length++;
    }

    char str2[length];

    for (int i = length - 1; i >= 0; i--)
    {
        str2[j] = str[i];
        j++;
    }

    printf("The String: %s\n", str);
    printf("The Reversed String: %s", str2);
}