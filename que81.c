// Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/

#include<stdio.h> 

int main()
{
char str[1000]; 
printf("Enter the string : "); 
gets(str) ; 

    int count = 0;
    while (str[count] != '\0') //This '\0' marks the end of the string , included automatically 
    {
    count++;
    }

    // fgets stores '\n' before '\0' when user presses Enter,
    // so length includes it , and has to be removed from the count 
    if (count > 0 && str[count - 1] == '\n') 
    {
        count--; 
    }
    
    printf("%d",count);

    return 0;
}