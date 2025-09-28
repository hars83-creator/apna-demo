// Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/

#include<stdio.h> 

int main()
{
    int row , col , i , j ; 

    printf("Enter the number of rows and columns of the martix : ");
    scanf("%d%d",&row,&col); 

    int matrix1[row][col] , matrix2[row][col] , sum[row][col] ; 
    
    printf("Enter the elements of the first matrix : \n"); 
    for(i=0 ; i<row ; i++)
    for(j=0 ; j<col ; j++)
    scanf("%d",&matrix1[i][j]); 
        
    printf("Enter the elements of the second matrix : \n"); 
    for(i=0 ; i<row ; i++)
    for(j=0 ; j<col ; j++)
    scanf("%d",&matrix2[i][j]); 

    for(i=0 ; i<row ; i++)
    for(j=0 ; j<col ; j++)
    sum[i][j] = matrix1[i][j] + matrix2[i][j] ; 
    
    printf("Sum of both matrix is : \n"); 
    for(i=0 ; i<row ; i++)
    {
    for(j=0 ; j<col ; j++)
    {
    printf("%d ",sum[i][j]);
    }
    printf("\n"); 
    }

    return 0 ; 

