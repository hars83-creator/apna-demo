// Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/

#include<stdio.h> 
#include<string.h>

int main()
{
    int n , i ; 
    char str[1000]; 
    printf("Enter the string : ");
    gets(str); 

    n=strlen(str); 

    printf("Required output is : \n"); 
    for(i=0  ; i<n ; i++)
    {
        if(str[i]==' ')
        str[i]='-'; 
        printf("%c",str[i]); 
    }

    return 0 ; 
}