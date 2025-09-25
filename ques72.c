//  Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/

#include<stdio.h> 

int main()
{
    int row , column , i , j ; 
    int sum = 0 ; 

    printf("Enter the number of rows : "); 
    scanf("%d",&row); 
    printf("Enter the number of columns : "); 
    scanf("%d",&column); 

    int arr[row][column] ; 

    printf("Enter the numbers \n"); 
    for(i=0 ; i<row ; i++)
    for(j=0 ; j<column ; j++)
    scanf("%d",&arr[i][j]);

    for(i=0 ; i<row ; i++)
    {
        for(j=0 ; j<column ; j++)
        {
            sum = sum + arr[i][j]; 
        }
    }

    printf("Sum of all the elements of the array is : %d",sum); 

    return 0 ; 

}