//Write a program to calculate the sum of two matrices each of order 3x3.
#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], result[3][3];
 
    // Taking input using nested for loop
    printf("Enter elements of 1st matrix\n");
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            scanf("%d", &a[i][j]);
        }
    }
    // Taking input using nested for loop
    printf("Enter elements of 2nd matrix\n");
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            scanf("%d", &b[i][j]);
        }
    }
    // adding corresponding elements of two matrices
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
    // Displaying the sum
    printf("Sum Of Matrix:\n");
 
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}