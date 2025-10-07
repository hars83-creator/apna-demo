//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include<stdio.h> 
#include<string.h> 

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

// funtion to reverse every word of the sentence stored in the the array from the above function 
void reversewords(char words[100][100], int count) // here count variable is for the storage of number of words in the sentence
{
    for (int i = 0; i < count; i++) 
    {
    int length = 0;
    while (words[i][length] != '\0')//to calculate the length of the every word stored at the ith index of the array 
    length++;

    //reverse the word at the ith index of the array using a reverse array of j 
    for (int j=length-1 ; j>=0 ; j--) 
    {
    printf("%c",words[i][j]);
    }
    printf(" ");
    }
}


int main()
{
char str[1000] , words[100][100]; 
printf("Enter the string : \n"); 
gets(str); 

int no_of_words = splitWords(str,words); 

printf("reverse of each word of the string is : \n"); 
reversewords(words,no_of_words); // here words is a 2D array which stores the index of the word and length of that word 

return 0 ;

}