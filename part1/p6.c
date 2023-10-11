#include <stdio.h>

void main()
{
    printf("Name: Yash Vardhan Singh\nRegistration Number: 220011015002\n");
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %dth element of the array: ", (i + 1));
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}