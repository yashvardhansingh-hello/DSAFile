#include <stdio.h>

void main()
{
    printf("Name: Yash Vardhan Singh\nRegistration Number: 220011015002\n\n");
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr2[3][3] = {{2, 3, 4}, {9, 8, 7}, {5, 3, 2}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j] + arr[i][j]);
        }
        printf("\n");
    }
}