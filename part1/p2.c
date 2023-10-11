#include <stdio.h>

int mut(int x, int y, int z)
{
    return x * y * z;
}
void main()
{
    printf("Name: Yash Vardhan Singh\nRegistration Number: 220011015002\n");
    int a, b, c;
    printf("Enter the first value: ");
    scanf("%d", &a);
    printf("Enter the second value: ");
    scanf("%d", &b);
    printf("Enter the third value: ");
    scanf("%d", &c);

    printf("The multiplication of given Numbers using Functions: %d", mut(a, b, c));
}