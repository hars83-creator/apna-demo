// Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include<stdio.h> 
#include<string.h>

void initials(char str[])// funtion to print the initials of the first name 
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
    char name[50]; // input the name of the user 
    printf("Enter your name : "); 
    gets(name); 

    char surname[15]; // to store the surname of user 
    int i , j , k=0 , index ; 

    int length = strlen(name); // length of the name 

    while(length>0 && name[length - 1]==' ')// to deal with the blank spaces if entered at the last after the name 
    {
    name[length - 1] = '\0';
    length--;
    }


    for(i=length-1 ; i>=0 ; i--)// store the surname of the user to another string 
    {
    if(name[i]!='\0' && name[i]==' ' && name[length]!=' ')
        {
        for(j=i+1 ; j<length ; j++)
        {
        index = i ; // store the index from where the surname starts in the string 
        surname[k]=name[j]; 
        k++; 
        }
        break ; 
        }
    }
    surname[k] = '\0';// ending of the surname array 


// now store the first name of the user in an another string 
char firstname[40]; 
for(i=0 ; i<index ; i++)
firstname[i]=name[i]; 
firstname[index]='\0'; 

initials(firstname);
printf(" %s",surname);

return 0 ; 
}