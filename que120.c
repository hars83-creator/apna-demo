// Q120: Write a program to take a string input. Change it to sentence case.

/*
Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/
#include <stdio.h>


#include <ctype.h>

int main() {

    char input[1024];


    
    int idx = 0;
    char ch;

    // Read entire line 
    while ((ch = getchar()) != '\n' && ch != EOF && idx < 1023) {

 input[idx++] = ch;

    }
    input[idx] = '\0';

    // Convert to sentence case - capitalize first letter of each word
int capitalize_next = 1;  // Flag to capitalize next letter

    for (int i = 0; input[i] != '\0'; i++) {

if (isspace(input[i])) {
            capitalize_next = 1;
 } else if (capitalize_next && isalpha(input[i])) {
            input[i] = toupper(input[i]);
            capitalize_next = 0;
 } else {
            input[i] = tolower(input[i]);
}
    }

    printf("%s\n", input);
    return 0;
}
