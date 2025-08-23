   // Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/

#include <stdio.h>

int main() {
    int a, b, temp;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Display before swapping
    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // Swap using a third variable
    temp = a;
    a = b;
    b = temp;

    // Display after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
