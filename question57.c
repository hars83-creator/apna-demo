// Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/

#include<stdio.h> 

int main()
{
int n , i ;
int sum = 0 ; 

printf("Enter the number of numbers you want to enter \n");
scanf("%d",&n); 

int numbers[n]; 
// take input of n numbers from the user 
printf("Enter the numbers \n"); 
for(i=0;i<n;i++)
{
scanf("%d",&numbers[i]);
}
// calculate the sum of the numbers entered in the array 
for(i=0 ; i<n ; i++)
{
sum = sum + numbers[i]; 
}

printf("sum of the numbers is : %d",sum); 

return 0 ; 
}