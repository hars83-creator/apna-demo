// Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/

#include<Stdio.h>

int main()
{
    int row , col , i , j , sum=0 ; 
    printf("Enter the number of rows and columns : "); 
    scanf("%d%d",&row,&col); 

    int matrix[row][col];

    printf("Enter the elements of the matrix \n"); 
    for(i=0 ; i<row ; i++)
    for(j=0 ; j<col ; j++)
    scanf("%d",&matrix[i][j]); 

    for(i=0 ; i<row ; i++)
    {
        for(j=0 ; j<col ; j++)
        {
        if(i==j)
        sum = sum + matrix[i][j]; 
        }
    }

    printf("Sum of the diognal elements of the matrix is : %d",sum); 

    return 0 ; 
}