// Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>
#include <string.h>

// Function to split the sentence into words into different string in an array 
int splitWords(char sentence[], char words[100][100]) // char words[MAX_WORDS][MAX_LEN]
{
    int i = 0, j = 0, k = 0;
    while(1) 
    {
        if(sentence[i] != ' ' && sentence[i] != '\0') 
        {
        words[k][j] = sentence[i];//here k reperesents the Kth word of the sentence , j for Jth alphabet of that word 
        j++; 
        } 
        else 
        {
        words[k][j] = '\0';
        k++;      // after we find a space in the sectence , moves to the next word 
        j=0;
        }
        if (sentence[i] == '\0')// represents the end of the sentence/string 
        break;
        i++;
    }
    return k; // number of words found in the sentence 
}

// Function to find the index of the longest word now stored in the array 
int find(char words[100][100],int count) 
{
    int maxIndex = 0;// lets consider the largest word at the zero index and check for the other 
    for (int i = 1; i < count; i++) 
    {
    if (strlen(words[i]) > strlen(words[maxIndex])) 
    maxIndex = i;
    }
    return maxIndex;
}

int main() 
{
    char sentence[1000];// lets consider the maximum limit of the string be 1000 characters 
    char words[100][100];// consider the max limit of the words and number of alphabets in each word be 100
    
    printf("Enter a sentence:\n");
    gets(sentence); // input a string from the user 

    int count = splitWords(sentence,words);// stores the value of number of words in the string 
    int index = find(words,count);// stors the index of the longest word in the string 

    printf("Longest word: %s\n",words[index]);

    return 0;
}