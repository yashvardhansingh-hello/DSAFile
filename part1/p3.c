#include <stdio.h>
void mutRef(int *a, int* b, int* c)
{
    *a = (*a)*(*b)*(*c);
}
void main() {
    printf("Name: Yash Vardhan Singh\nRegistration Number: 220011015002\n");
    int a, b, c;
    printf("Enter the first value: ");
    scanf("%d", &a);
    printf("Enter the second value: ");
    scanf("%d", &b);
    printf("Enter the third value: ");
    scanf("%d", &c);
    mutRef(&a, &b, &c);
    printf("The Multiplication of given Numbers using function reference call: %d", a);
}