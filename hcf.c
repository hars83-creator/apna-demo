//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include <stdio.h>

int main() {
    int num1, num2, i, hcf = 1, min;  // Declares variables to store the two input numbers, a loop counter `i`, and the result `hcf` .


    printf("Enter two numbers: ");     // Prompt user for input
    scanf("%d %d", &num1, &num2);   // Read two integers

    min = (num1 < num2) ? num1 : num2;    // Runs a loop from 1 up to the smaller of the two numbers
                                            // only numbers up to this range can be a common factor 

    for (i = 1; i <= min; i++) {            // Loop from 1 to min
        if (num1 % i == 0 && num2 % i == 0) {    // Checks if `i` divides both numbers without leaving a remainder.
                                               //  If true, updates `hcf` 
            hcf = i;                  // Update hcf if i is a common factor
        }
    }

    printf("%d\n", hcf);                     // Print the HCF
    return 0;
}

