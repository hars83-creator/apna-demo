// Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/

#include<stdio.h> 
#include<string.h> 
int main()
{
    int n , i , j = 0 ; 
    char str[1000];
    char result[1000];

    printf("Enter the string : "); 
    gets(str); 

    n = strlen(str); 

    for(i=0 ; str[i]!='\n' ; i++)
    {
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U');

    else
    {
    result[j]=str[i]; 
    j++ ;
    }
    }
    printf("REQUIRED OUTPUT IS\n"); 
    printf("%s",result); 

    return 0 ; 
}