// Q55: Write a program to print all the prime numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int i, j, isprime;

    for(i = 2; i <= n; i++) 
    {
    isprime = 1;// assume prime 

    for(j = 2; j*j <= i; j++) // We use j*j <= i to reduce the number of checks while still being mathematically correct.
    {
        if(i % j == 0) 
        {
        isprime = 0;
        break;
        }
    }

    if(isprime == 1)
    printf("%d ", i);
    }

    return 0;
}