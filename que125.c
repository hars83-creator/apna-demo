// Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char newLine[256];

    // Prompt for the filename to open in append mode
    printf("Enter the filename to append text: ");
    scanf("%s", filename);




    // Open the file in append mode ("a")
    file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error: Unable to open file %s\n", filename);
        return 1;

    }

    // Clear input buffer before reading a new line with spaces
    getchar();



    // Prompt user to enter 



    printf("Enter the text to append: ");
    fgets(newLine, sizeof(newLine), stdin);

    // Append the entered text to the file
    fputs(newLine, file);

    // Close the file



    
    fclose(file);

    // Confirmation message
    printf("File updated successfully with appended text.\n");

    return 0;
}
