// Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
#include<math.h>
int main() {
    int num, temp, first, last, digits = 0, middle, swapped, i; 
    printf("Enter an integer: ");
    scanf("%d", &num);     // Read an integer from user

    temp = num;                // Copy of num to manipulate
    last = temp % 10;      // Get last digit    

                                     // Find number of digits and first digit using loop
    while (temp >= 10) {        // while more than 1 digit
        temp = temp / 10;      // Remove last digit
        digits++;        // Count digits
    }
    first = temp;        // First digit
    digits++; // total digit count

    if (digits == 1) {         // If single digit, no swap needed
        swapped = num;// remains the same
    } else {

                 // Find the 'middle' part without first and last digit
        middle = num %  (int)pow(10, digits - 1); // removes first digit 
        middle = middle / 10; // removes last digit 

        swapped = last * (int)pow(10, digits - 1) + middle * 10 + first;    // Construct swapped number
    }

    printf("%d\n", swapped);     // Output the result
    return 0;
}
