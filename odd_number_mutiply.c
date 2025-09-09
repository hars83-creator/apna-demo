/*Q39: Write a program to find the product of odd digits of a number.


Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>

int main() {
    int num, digit, product = 1;     // Initialize product to 1
    int odd = 0;   // Flag to check if any odd digit is found

    printf("Enter a number: ");      // Prompt user for input
    scanf("%d", &num);       // Read the input number

    while (num > 0) {
        digit = num % 10;      // Extract the last digit from the number
        if (digit % 2 == 1) { // Check if digit is odd (if any number multiplied by 2 leaves a remainder of 1 that is odd)
            product *= digit;    // Multiply the odd digit to the product
            odd = 1;    // Set flag to indicate at least one odd digit was found
        }
        num = num / 10;      // Remove the last digit from the number
    }

    if (odd == 0) { // No odd digits found
        product = 1;
    }

    printf("%d\n", product);
    return 0;
}
