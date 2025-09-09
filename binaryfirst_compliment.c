//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>

int main() {
    char ch;      // Variable to hold each character input
    printf("Enter a binary number: ");

    while ((ch = getchar()) != '\n' && ch != EOF) {        // Read until newline or EOF end of file
        if (ch == '0') {          
            putchar('1');          // If the character is '0', print '1'
        } else if (ch == '1') {        // If the character is '1', print '0'
            putchar('0');      // If the character is '1', print '0'
        } else {      
            // Invalid binary digit
            printf("\nInvalid input\n");
            return 1; 
        }
    }
    putchar('\n');
    return 0;
}

