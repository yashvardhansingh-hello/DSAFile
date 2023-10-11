#include <stdio.h>

void main()
{
    printf("Name: Yash Vardhan Singh\nRegistration Number: 220011015002\n\n");
    printf("1) Array is a data structure which store multiple data values of same data type \n   in continous memory allocation");

    printf("\n\n2)An array has a fixed size which needs to be provided at array initialization.\n  Unused space in an array stores garbage values.");

    int arr[] = {5, 2, 7, 1, 2};
    int n = 5;

    printf("\n\nTraversal of an array=>");
    for (int i = 0; i < 5; i++)
    {
        printf("\nAt index %d: %d", i, arr[i]);
    }

    printf("\n\n3)arr itself is a pointer that points to the start of the array");
}