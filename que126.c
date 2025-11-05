// Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.

/*
Sample Test Cases:
Input 1:
Filename: sample.txt (File Exists: Yes)
Output 1:
File opened successfully.
(Displays file content)

Input 2:
Filename: nofile.txt (File Exists: No)
Output 2:
Error: File does not exist!

*/
#include <stdio.h>



int main() {
    char file_name[128];
    FILE *file_ptr;
    int char_read;

    // Prompt for input file name
    printf("Please provide the filename: ");


    scanf("%127s", file_name);

    // Attempt to open file in read mode
    file_ptr = fopen(file_name, "r");

    if (file_ptr == NULL) {
        // File couldn't be opened

        printf("Oops! Can't find the file.\n");
    } else {
        // Successfully opened file
        printf("Hooray! File is open.\n");


        // Read and print content
        while ((char_read = fgetc(file_ptr)) != EOF) {
            putchar(char_read);
        }
        fclose(file_ptr);
    }

    return 0;
}
