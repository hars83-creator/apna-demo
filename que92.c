//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int freq[26] = {0};   // to store frequency of each lowercase alphabet
    int i, found = 0;

    printf("Enter the string: ");
    gets(str);  // for basic input (use fgets() in safe programs)

    for(i = 0; str[i] != '\0'; i++) 
    {
    char ch = str[i];
    if(ch >= 'a' && ch <= 'z') 
    {  // check for lowercase letters only
    freq[ch - 'a']++;         // increment count
    if(freq[ch - 'a'] == 2) 
    { // when count becomes 2, it’s repeating
    printf("First repeating lowercase alphabet : %c\n", ch);
    found = 1;
    break;                // stop once first repeat is found
    }
    }
    }

    if(!found)
    printf("No repeating lowercase alphabet found.\n");

    return 0;
}