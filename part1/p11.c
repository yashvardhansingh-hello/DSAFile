#include <stdio.h>

void traverseArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void main()
{
    printf("Name: Yash Vardhan Singh\nRegistration Number: 220011015002\n");
    int n = 6;
    int arr[6];
    int index = 4;
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i + 1;
    }

    traverseArr(arr, 6);

    for (int i = index; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    if (index == n - 1)
    {
        arr[index] = 0;
    }
    traverseArr(arr, n);
}