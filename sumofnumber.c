// Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include <stdio.h>

int main() {
    int num, sum = 0, digit;  // Initialize sum to 0

    printf("Enter a number: ");// Prompt user for input
    scanf("%d", &num);// Read the input number

    while (num > 0) {
        digit = num % 10;  // Extract the last digit 
        sum += digit;      // Add the digit to sum
        num /= 10;         // Remove the last digit
    }

    printf("%d\n", sum);       // Print the sum of digits

    return 0;
}
