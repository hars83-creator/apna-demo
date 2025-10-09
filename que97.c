//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/

#include <stdio.h>
#include <string.h>

void initials(char str[])
{
    int i;
    int length = strlen(str);

    // Print first initial of the name , also check if the frist intial is not a space 
    if (str[0] != ' ')
    printf("%c.", str[0]);

    // Print initials after every space , also check if the next to the space is also not a space or the end of the string 
    for (i = 0; i < length; i++)
    {
    if (str[i] == ' ' && str[i + 1] != '\0' && str[i + 1] != ' ')
    printf("%c.", str[i + 1]);
    }
}

int main()
{
    char name[40];

    printf("Enter your name: ");
    gets(name); 

    printf("Initials: ");
    initials(name);

    return 0;
}