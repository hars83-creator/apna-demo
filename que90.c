//Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/

#include<stdio.h> 
#include<string.h> 
int main()
{
    int n , i ; 
    char str[1000];

    printf("Enter the string : "); 
    gets(str); 

    n = strlen(str); 

    for(i=0 ; i<n ; i++)
    {
        if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
        {
        if(str[i]>='A'&&str[i]<='Z')
        str[i]=str[i]+32 ; 
        else if(str[i]>='a'&&str[i]<='z')
        str[i]=str[i]-32 ; 
        }
        printf("%c",str[i]); 
    }

    return 0 ; 
}