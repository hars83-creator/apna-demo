// Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
#include <stdio.h>

int main() {
    int num, sum = 0;  // Initialize sum to 0
     printf("Enter a number: ");
    scanf("%d", &num);// Read input number

    for(int i = 1; i <= num / 2; i++) {// Loop to find divisors
        if(num % i == 0)    // Check if i is a divisor
            sum += i;      // Add divisor to sum   
    }

    if(sum == num && num > 0)       // Check if sum of divisors equals the number
        printf("Perfect number\n");    // Print if it's a perfect number
    else                                          
        printf("Not perfect number\n");     // Print if it's not a perfect number

    return 0;   
}

