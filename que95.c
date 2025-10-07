// Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation
*/

#include<stdio.h>
#include<string.h> 

int isrotation(char str1[],char str2[])
{
int len1 = strlen(str1);//length of the first string 
int len2 = strlen(str2);//length of the second string 

if(len1!=len2)// if the length of both the strings are different , the string is not the rotation of other 
return 0 ; 

// here i is for the number of rotations 
for (int i = 0; i < len1; i++) 
{
    int match = 1;
    // Compare characters of str1 rotated by i positions with str2
    for (int j = 0; j < len1; j++) 
    {
    if (str1[(i+j) % len1] != str2[j]) 
    {
    match = 0;
    break;// if found any of the missmatch from the required check , the inner loop will break and again start for a new number of rotations 
    }
    }

    // If all characters matched in one rotation , return 1 which represents the success in finding the rotations 
    if(match == 1)
    return 1;
}

return 0; // No rotation matched
}


int main()
{
    char str1[1000],str2[1000]; 

    printf("Enter the first string : \n"); 
    gets(str1); 

    printf("Enter the second string : \n"); 
    gets(str2); 

    if(isrotation(str1,str2))
    printf("YES its the rotation"); 
    else 
    printf("NOT the rotation");  

    return 0 ; 

