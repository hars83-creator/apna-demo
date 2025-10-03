//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/

#include<stdio.h> 
#include<string.h>// contains strlen() funtion 

int main()
{
char str[1000] ; 
printf("Enter the string : \n"); 
gets(str);

int n = strlen(str); // check the length of the string 

int index = 0 ; 

while(str[index]!='\0' && str[index]!='\n')
{
    if(str[index]==str[n-1-index])
    {}
    else
    {
        printf("not a palindrome number "); // if number is palindrome , the program ends here 
        return 0 ;
    }
    index++ ; 
}

printf("palindrome number ");// executes only if the string is palindrome as the code ends above in the other case . 
return 0 ; 

}