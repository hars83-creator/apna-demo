// Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>

int main() {
    int num, original, reverse = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;  //  Store orginal number to compare in last

    //  Reverse the number using maths != not equal to , /= 10 remove last digit from number
    while (num != 0) {
        remainder = num % 10;            //  Extract last digit
        reverse = reverse * 10 + remainder; //  digit to reversed number
        num /= 10;                      //  Remove last digit from num
    }

   
    if (original == reverse)
        printf("%d is a palindrome number.\n", original);
    else
        printf("%d is not a palindrome number.\n", original);

    return 0;
}
