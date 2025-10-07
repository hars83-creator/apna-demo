//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams
*/

#include <stdio.h>
#include <string.h>

void sortString(char str[]) // create the funtion to sort the text written in the string 
{
    int n = strlen(str); // strlen() is the funtion to calculate the length of the string 
    char temp;
    for(int i = 0; i < n - 1; i++) 
    {
        for(int j = i + 1; j < n; j++) 
        {
        if(str[i] > str[j]) // sort all the character in the ascending order 
        {
        temp = str[i]; 
        str[i] = str[j];
        str[j] = temp;
        }
        }
    }
}

int main() 
{
    char str1[1000],str2[1000];

    printf("Enter the first string:\n");
    gets(str1); 

    printf("\nEnter the second string:\n");
    gets(str2); 

    if (strlen(str1) != strlen(str2)) // if the length of both the strings is different , Not aragrams . 
    {
        printf("\nNot anagrams\n");
        return 0;
    }

    sortString(str1);
    sortString(str2);

    if(!strcmp(str1,str2)) // strcmp() is used to compare two strings returns 0 if true and 1 if false . 
        printf("\nAnagrams\n");
    else
        printf("\nNot anagrams\n");

    return 0;
}