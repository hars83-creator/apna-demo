// Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/

#include<stdio.h>

int main()
{
    int n , i ; 
    printf("Enter the number of values you want to enter : "); 
    scanf("%d",&n); 

    int numbers[n] ; 
    printf("Enter the  numbers \n") ; 

    //Enter n values from the user in the array
    for(i=0 ; i<n ; i++)
    {
    scanf("%d",&numbers[i]); 
    }

    //lets consider value at zero index be the minimum value 
    int min = numbers[0]; 
    //check whether the other number is less that the number at 0 index , if yes , update the number 
    for(i=0 ; i<n ; i++)
    {
    if(numbers[i]<min)
    min = numbers[i]; 
    }
                           //lets consider value at zero index be the maximum value 
    int max = numbers[0];
                                //check whether the other number is more than the number at 0 index , if yes , update the number 
    for(i=0 ; i<n ; i++)
    {
    if(numbers[i]>max)
    max = numbers[i]; 
    }
    //output minimum and maximum numbers 
    printf("Minimum number : %d\n",min); 
    printf("Maximum number : %d\n",max); 

    return 0 ; 
}