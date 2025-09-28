//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/

#include<stdio.h> 

int main()
{
    int row , col , i , j ; 

    printf("Enter the number of rows and columns of the martix : ");
    scanf("%d%d",&row,&col); 

    int matrix[row][col] ; 
    
    printf("Enter the elements of the first matrix : \n"); 
    for(i=0 ; i<row ; i++)
    for(j=0 ; j<col ; j++)
    scanf("%d",&matrix[i][j]); 

    for(i=0 ; i<row ; i++)
    {
    for(j=0 ; j<col ; j++)
    {
    if(matrix[i][j] == matrix[j][i])
    continue ; 
    else 
    {
    printf("Not a symmetric matrix"); 
    return 0 ; 
    }
    }
    }
    printf("Its a symmteric matrix"); 
    return 0 ; 
}