//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/

#include <stdio.h>
#include <ctype.h>  // includes tolower() funtion  

int main() 
{
    char str[1000];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    gets(str); 

    int i = 0;
    while (str[i] != '\0') 
    {
        char ch = tolower(str[i]); // convert every character to lower case to make easy to check 

        if ((ch >= 'a' && ch <= 'z')) // check if the character is alphabet or special character 
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
            vowels++;  
            else 
            consonants++;
        }
        i++;
    }

    printf("Number of vowels and consonants are \n"); 
    printf("Vowels=%d , Consonants=%d\n", vowels, consonants);

    return 0;
}