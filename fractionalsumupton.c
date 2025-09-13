// Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22

*/

#include<stdio.h> 

int main()
{
    int n , i ; 
    double sum = 0 ;

    printf("Enter the value of n : "); 
    scanf("%d",&n); 

    for(i=1 ; i<=n ; i++)
    {
        sum = sum + (float)(2*n)/(4*n-1); // n th term of series is 2n/(4n-1)
    }

    printf("Sum of first %d terms of the following series is %f",n,sum); 

    return 0 ; 
}