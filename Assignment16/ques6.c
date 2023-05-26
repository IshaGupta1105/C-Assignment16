//Write a program in C to find the sum of rows and column of a matrix.
#include <stdio.h>
int main()
{
    int m, n;      
    printf("Enter the required number of rows and columns: \n ");
    scanf( "%d %d" , &m, &n );   
    
    int arr[m][n];   
    printf("Enter the elements of the given matrix: \n") ;
    for( int i=0; i<m; i++)     
    {
        for(int j=0; j<n; j++)
        {
            scanf( "%d", &arr[i][j]);
        }
    }
    printf("Calculation of Row:\n");
    for(int i=0; i<m; i++)   
    {
        int rowsum=0;
        for(int j=0; j<n; j++)
        {
            rowsum = rowsum + arr[i][j] ;
        }
        printf("Sum of the elements in row %d is %d \n ", i, rowsum);
    }
    printf("Calculation of column:\n" );
    for(int j=0; j<n; j++)   
    {
        int columnsum=0;
        for(int i=0; i<m; i++)
        {
            columnsum = columnsum + arr[i][j] ;
        }
        printf("Sum of the elements in row %d is %d \n ", j, columnsum);
    }
     return 0;
}
