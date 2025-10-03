// Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/

#include<stdio.h> 

int main()
{
    char str[1000]; 
    printf("Enter string you want to input : \n");
    gets(str); 

    int count=0 ; 
    printf("After conversion to upper case : \n"); 
    while(str[count]!='\0')
    {
        if(str[count]>='a' && str[count]<='z')
        {
        str[count] = str[count] - 32 ;  
        }
        printf("%c",str[count]); 
        count++; 
    }

    return 0 ; 

}