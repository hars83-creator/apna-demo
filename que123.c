// Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;
    char ch;

    // Open the file in read mode
    file = fopen("sample.txt", "r");
    if (file == NULL) {
        printf("Error: Unable to open file sample.txt\n");
        return 1;  // Exit if file not found or cannot be opened
    }

    // Read character by character until end of file
    while ((ch = fgetc(file)) != EOF) {
        characters++;  // Count every character read

        // Count lines on newline character
        if (ch == '\n') {
            lines++;
        }

        // Check if the character is part of a word
        if (isspace(ch)) {
            if (inWord) {
                words++;      // End of a word detected
                inWord = 0;
            }
        } else {
            inWord = 1;      // Inside a word
        }
    }

    // If file does not end with space/newline, count last word
    if (inWord) {
        words++;
    }

    // If file has content but no newline, count line 1
    if (characters > 0 && lines == 0) {
        lines = 1;
    }

    // Close the file
    fclose(file);

    // Print the results
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
