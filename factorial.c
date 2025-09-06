//Q29: Write a program to calculate the factorial of a number.

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
    int fact = 1 ;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Factorial of a negative number doesn't exist.\n");
    else {
        for (i = 1; i <= n; ++i) {//first use i then add 1
            fact *= i; 
        }
        printf("Factorial of %d = %d\n", n, fact);
    }
    return 0;
}
