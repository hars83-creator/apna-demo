//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>

int main() {
    int num, originalNum, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;
    
    while (num > 0) {
        int digit = num % 10;
        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }
        sum += fact;
        num /= 10;
    }

    if (sum == originalNum)
        printf("Strong number\n");
    else
        printf("Not strong number\n");

    return 0;
}
