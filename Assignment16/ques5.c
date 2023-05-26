//Write a program in C to find the sum of left diagonal of a matrix.
#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum=0;
    printf("Enter elements of matrix:\n");
    for(i=0;i< 3;i++)
       {
          for(j=0;j< 3;j++)
            {
               scanf("%d", &a[i][j]);
            }
        }
    for(i=0,j=2;i<3;i++,j--)
    {
        sum=a[i][j]+sum;
    }
    printf("Sum of left diagonal is %d\n",sum);
    return 0;
}