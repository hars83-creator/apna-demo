//Q7: Write a program to swap two numbers without using a third variable.

/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swap without using a third variable
             //a=10 ,b=15
             
    a = a + b;  // 10+15 =25
    b = a - b;  // 25-15 =10
    a = a - b;  // 25-10 =15

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
