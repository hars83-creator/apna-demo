// Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

/*
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/
#include <stdio.h>

int main() {
    int m, n;

    scanf("%d", &m);
    int array1[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &array1[i]);
    }

    scanf("%d", &n);
    int array2[n];

    
    for (int i = 0; i < n; i++) {
        scanf("%d", &array2[i]);
    }

    int merged[m + n];
    int i = 0, j = 0, k = 0;

    // Merge process
    while (i < m && j < n) {
        if (array1[i] <= array2[j]) {


            merged[k++] = array1[i++];
        } else {


            merged[k++] = array2[j++];
        }
    }

    // Copy remaining elements of array1 if available
    while (i < m) {
        merged[k++] = array1[i++];
    }

    // Copy remaining elements of array2 if available
     while (j < n) {
        merged[k++] = array2[j++];
    }
 for (int idx = 0; idx < m + n; idx++) {
        printf("%d ", merged[idx]);
    }


    printf("\n");

    return 0;
}
