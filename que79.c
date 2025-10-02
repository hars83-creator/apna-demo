//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/

#include <stdio.h>

int main() {
    int n, m;
    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &m);

    int mat[n][m];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++) 
    for (int j = 0; j < m; j++) 
    scanf("%d", &mat[i][j]);

    printf("Diagonal Traversal:\n");

    // Total diagonals = n + m - 1
    for (int d = 0; d < n + m - 1; d++) 
    {
        if (d % 2 == 0) 
        {
            // Traverse upward half 
            int i = (d < n) ? d : n - 1;
            int j = d - i;
            while (i >= 0 && j < m) 
            {
                printf("%d ",mat[i][j]);
                i--;
                j++;
            }
        } 
        else 
        {
            // Traverse downward half 
            int j = (d < m) ? d : m - 1;
            int i = d - j;
            while (i < n && j >= 0) 
            {
                printf("%d ",mat[i][j]);
                i++;
                j--;
            }
        }
    }

    return 0;
}