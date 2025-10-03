//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/

#include<stdio.h> 
#include<string.h>// contains strlen() funtion 

int main()
{
char str[1000] , reverse[1000];
printf("Enter the string : \n"); 
gets(str);// input the string 

int n = strlen(str); // store the length of the string 
int index = 0 ; 
printf("Reverse of the string is \n");
while(str[index]!='\0')// indicates the end of the array 
{
    if(str[index]!='\n')
    reverse[index] = str[n-1-index]; //store digits from the last in the another string from the start 
    printf("%c",reverse[index]);
    index++ ; 
}
return 0 ;

}