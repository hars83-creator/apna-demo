//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>

void binary(int unsigned n) {           //Defines a function named "binary" that takes an unsigned integer "n" as input. 
                                        //This function will be used to print the binary form of n
    if (n > 1)
        binary(n / 2);                //f the value of `n` is more than 1,
                                      //   the function recursively calls itself with the value of `n` divided by 2.
                                      // This recursion continues until `n` becomes 1. 
    printf("%d", n % 2);
}

int main() {                             // Main function where the program execution starts
     int unsigned num;                // Declare an unsigned integer variable named "num" to store user positive input
    printf("Enter a number: ");          // Take input from user
    scanf("%u", &num);                // {%u is used for unsigned int}
    
    binary(num);                   // This prints the binary representation of "num" by calling the `binary` function.
    printf(" is binary representation of %d\n",num);
    return 0;
}

