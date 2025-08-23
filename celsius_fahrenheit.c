//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include <stdio.h>
int main()
    {
         float celsius,fahrenheit;
         
            printf("enter the celsius :");
            scanf("%f", &celsius);

         fahrenheit = (celsius*9/5)+32;//also use 1.8 instead of 9/5
         printf("farenheit is :%f\n",fahrenheit);
         return 0;
    }