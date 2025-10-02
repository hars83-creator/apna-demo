//Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/

#include <stdio.h>

int main() 
{
    int m, n, p, q;

    printf("Enter rows and columns of first matrix: ");// input the order of first matrix 
    scanf("%d%d",&m,&n);

    int A[m][n];

    printf("Enter elements of first matrix:\n");// input elements of the first matrix 
    for (int i = 0; i < m; i++) 
    for (int j = 0; j < n; j++) 
    scanf("%d", &A[i][j]);

    printf("Enter rows and columns of second matrix: ");// input the order of second matrix 
    scanf("%d%d",&p,&q);

    int B[p][q];

    printf("Enter elements of second matrix:\n");// input elements of the second matrix 
    for (int i = 0; i < p; i++) 
    for (int j = 0; j < q; j++) 
    scanf("%d", &B[i][j]);

    if (n != p)// check whether the multiplication is possible or not 
    {
        printf("Matrix multiplication not possible !!\n");
        return 0;
    }

    int C[m][q];// compute a third matrix which is the product of the first two 
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < q; j++) 
        {
        C[i][j] = 0;
        for (int k = 0; k < n; k++) 
        {
        C[i][j] += A[i][k] * B[k][j];
        }
        }
    }

    printf("Resultant Matrix:\n");// print the resultant matrix 
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < q; j++) 
        {
        printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}