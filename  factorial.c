// Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
#include <stdio.h>

int main() {
    int n, i;
    int fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {  // factorial * i tabtak hoga jabtak i n ke baraabar na ho jaye
        fact = fact * i;
    }

    printf("Factorial = %d\n", fact);

    return 0;
}
