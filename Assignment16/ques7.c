//write a c program to display the lower triangular of a given matrix.
#include<stdio.h>

int main()
{
    int a[3][3],i,j;
    printf("Enter elements of matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Lower triangular matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i>=j)
              printf("%d ",a[i][j]);
            else 
              printf("0 ");
        }
        printf("\n");
    }
    return 0;
}