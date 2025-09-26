//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/

#include <stdio.h>

int main() 
{
    int rows, cols;
    printf("Enter the number of rows and columns : "); 
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    int rowSum[rows];

    // Input matrix
    printf("Enter the elements of the array \n"); 
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate row sums
    for (int i = 0; i < rows; i++) 
    {
        rowSum[i] = 0;  // initialize sum for this row
        for (int j = 0; j < cols; j++) 
        {
            rowSum[i] += matrix[i][j];
        }
    }

    // Print row sums
    printf("Sum of all the elements row wise is \n"); 
    for (int i = 0; i < rows; i++) 
    {
        printf("%d ", rowSum[i]);
    }

    return 0;
}