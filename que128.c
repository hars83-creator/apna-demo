// Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

/*
Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *filePointer;
    char character;
    int vowelCount = 0, consonantCount = 0;
    const char vowels[] = "aeiouAEIOU";

    filePointer = fopen("text.txt", "r");





    if (filePointer == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    while ((character = fgetc(filePointer)) != EOF) {
        if (isalpha(character)) {





            


            int isVowel = 0;
            for (int i = 0; vowels[i] != '\0'; i++) {
                if (character == vowels[i]) {
                    vowelCount++;
                    isVowel = 1;
                    break;
                }
            }
            if (!isVowel) {
                consonantCount++;
            }
        }
    }

    fclose(filePointer);

    printf("Total vowels: %d\n", vowelCount);
    printf("Total consonants: %d\n", consonantCount);

    return 0;
}
