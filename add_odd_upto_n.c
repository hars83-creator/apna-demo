//Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include <stdio.h>

int main() 
{
    int n, i = 1, count = 0, sum = 0;

    printf("Enter value of n: ");
    scanf("%d", &n);

    while (count < n) {
        sum += i;
        i += 2;        
        count++;
    }

    printf("Sum of first %d odd numbers = %d\n", n, sum);
    return 0;
}
