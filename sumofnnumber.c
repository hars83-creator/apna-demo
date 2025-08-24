//Q8: Write a program to find and display the sum of the first n natural numbers.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // --- Method 1: Using a loop ---5
    for (i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Sum of first %d natural numbers  = %d\n", n, sum);

   

    return 0;
}
