// Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/

#include<stdio.h>

int main()
{
char str[1000]; 
printf("Enter the string : \n"); 
gets(str); 

int count=0 ; 
printf("Required output is \n"); 
while (str[count] != '\0') //This '\0' marks the end of the string , included automatically 
    {
    {
    if(str[count!='\n'])
    printf("%c\n",str[count]); 
    count++;
    }
    }
return 0 ; 