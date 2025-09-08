//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>

int main() {
    int x, y, max;  // Declare variables to hold the two integers and their LCM

    printf("Enter two positive integers: ");   // Prompt for user for input
    scanf("%d %d", &x, &y);      // Input two positive integers

    max = (x > y) ? x : y;// Initialize max to the greater of x and y

     // Loop until we find the LCM

    while (1) {    // Infinite loop
      if (max % x == 0 && max % y == 0) {     // Check if max is divisible by both x and y
         printf("The LCM of %d and %d is %d.\n", x, y, max);// Print the LCM
     break;// Exit the loop
        }
        ++max;       // Increment max by 1
    }

    return 0;
}
