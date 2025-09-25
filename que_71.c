// Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/

#include<stdio.h> 

int main()
{
    int row , column , i , j ; 
    printf("Enter the number of rows : "); 
    scanf("%d",&row); 
    printf("Enter the number of columns : "); 
    scanf("%d",&column); 

    int arr[row][column] ; 

    printf("Enter the numbers \n"); 
    for(i=0 ; i<row ; i++)
    for(j=0 ; j<column ; j++)
    scanf("%d",&arr[i][j]);

    printf("The entered matrix is : \n"); 
    for(i=0 ; i<row ; i++)
    {
        for(j=0 ; j<column ; j++)
        {
        printf("%d ",arr[i][j]); 
        }
        printf("\n"); 
    }

    return 0 ; 
}