//Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/

#include<stdio.h>
#include<string.h>  

int main()
{
    char str[1000]; 
    int spaces=0,digits=0,special=0 ; 
    printf("Enter the string : ");
    gets(str); 

    int n = strlen(str); 
    int i ; 

    for(i=0 ; i<n ; i++)
    {
        if(str[i]==' ')
        spaces++ ; 
        else if(str[i]>='0' && str[i]<='9')
        digits++ ; 
        else if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
        continue ; 
        else if(str[i] != '\n')
        special++ ; 
    }

    printf("output"); 
    printf("\nspaces=%d,digits=%d,special characters=%d",spaces,digits,special); 

    return 0 ; 
}