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
    int n = 10;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int value = 4;
    int index;
    traverseArr(arr, n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == value)
        {
            index = i;
            break;
        }
    }
    for (int i = index; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    traverseArr(arr, n);
}