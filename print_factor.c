//Q35: Write a program to print all factors of a given number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
1 2 3 6

Input 2:
10
Output 2:
1 2 5 10

*/
#include <stdio.h>

int main() {
    int number, i;
                                               
    printf("Enter a positive integer: "); // Prompt user for input
    scanf("%d", &number); // Read user input

    printf("Factors of %d are: ", number);// Print the factors
    for (i = 1; i <= number; i++) {         // Loop from 1 to the number
        if (number % i == 0) {             // Check if i is a factor
            printf("%d ", i);           // Print the factor 
        }
    }
    printf("\n");              // New line after printing all factors
    return 0;
}