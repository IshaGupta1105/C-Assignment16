//Write a C program to accept a matrix and determine whether it is a sparse matrix.
#include<stdio.h>

int main()
{
     int a[3][3],i,j,count=0;
    printf("Enter elements of matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(a[i][j]==0)
            count++;
        }
    }
    if(count>(3*3)/2)
       printf("Sparse matrix\n");
    else
       printf("Dense Matrix\n");
    return 0;
}