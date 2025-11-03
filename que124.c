// Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>

int main() {
    FILE *srcFile, *destFile;
    char srcFilename[100], destFilename[100];
    int ch;

    // Prompt user for source filename



    printf("Enter the source filename: ");
    scanf("%s", srcFilename);

    // Prompt user for destination filename

    printf("Enter the destination filename: ");
    scanf("%s", destFilename);




    // Open source file in read mode
    srcFile = fopen(srcFilename, "r");
    if (srcFile == NULL) {
        printf("Error: Cannot open source file %s\n", srcFilename);
        return 1;
    }

    // Open destination file in write mode (creates or overwrites)
    destFile = fopen(destFilename, "w");
    if (destFile == NULL) {
        printf("Error: Cannot open destination file %s\n", destFilename);
        fclose(srcFile);
        return 1;
    }

    // Copy content from source to destination one character at a time
    while ((ch = fgetc(srcFile)) != EOF) {
        fputc(ch, destFile);
    }

    // Close both files
    fclose(srcFile);
    fclose(destFile);


    

    // Confirmation message
    printf("File copied successfully to %s\n", destFilename);

    return 0;
}
