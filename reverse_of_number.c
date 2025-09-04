// Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include <stdio.h>

int main() {
    int num, reverse = 0, rem;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
     while (num != 0) {// Loop until num is 0
       rem = num % 10;           // Get last digit

        reverse = reverse * 10 + rem;  // last digit to reverse

        num /= 10;     // use of  /=10 is to remove last digit from num          
                     // Remove last digit jabtak num 0 na ho jaye 
    }
    printf("%d\n", reverse);
    return 0;
}
