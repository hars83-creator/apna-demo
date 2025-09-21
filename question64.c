// Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include<stdio.h>

int main()
{
int num , i , count=0 ; 
printf("Enter the numebr : "); 
scanf("%d",&num); 

int freq[10] = {0};  //to store frequency of digits 0 to 9
int temp = num ; 

while(num!=0)// count the number of digits in the number entered 
{
count++ ; 
num = num/10 ;
}

num = temp ; 

for(i=0 ; i<count ; i++)// calculate the frequency of digit from 0-9
{
int rem = num%10 ;
freq[rem]++ ;  
num = num/10 ; 
}

int max = freq[0]; // to check for the digit having the maximum frequeny 
for(i=0 ; i<10 ; i++)
{
    if(freq[i]>max)
    max = freq[i] ; 
}

printf("Digit(s) that occur the most: ");// to deal if the some digits have same frequency 
    for(i = 0; i < 10; i++) 
    {
        if(freq[i] == max) 
        printf("%d ", i);
    }

return 0 ; 
}