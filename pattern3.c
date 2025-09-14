
/*Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *

Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/
#include<stdio.h> 

int main()
{
int i , j ; 
for(i=1 ; i<=5 ; i++)
{
for(j=1 ; j<=5 ; j++)
{
if(j<i)
printf(" "); 
else 
printf("*"); 
}
printf("\n"); 
}
return 0 ; 
}