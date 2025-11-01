//Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/
#include <stdio.h>

int checkAnagram(char first[], char second[]) {

    int count[26] = {0};

    int i = 0;
    while (first[i] != '\0') {


 count[first[i] - 'a']++;
        i++;



    }

    i = 0;
    while (second[i] != '\0') {
        count[second[i] - 'a']--;
        i++;
    }

    for (i = 0; i < 26; i++) {




        if (count[i] != 0) {
            return 0;  // Not an anagram
        }
    }
    return 1;  // Is an anagram
}

int main() {
    char string1[1001], string2[1001];

    // Input first string
    int idx = 0;
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF && idx < 1000) {
    
    
        string1[idx++] = ch;
    }
    string1[idx] = '\0';

    // Input second string
    idx = 0;


    while ((ch = getchar()) != '\n' && ch != EOF && idx < 1000) {
        string2[idx++] = ch;
    }
    string2[idx] = '\0';

    if (checkAnagram(string1, string2)) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }

    return 0;
}
