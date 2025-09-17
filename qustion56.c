//Q56: Read and print elements of a one-dimensional array.

/*
Sample Test Cases:
Input 1:
3
10 20 30
Output 1:
10 20 30

Input 2:
5
1 2 3 4 5
Output 2:
1 2 3 4 5

*/

#include<stdio.h> 

int main()
{
    int n , i ; 
    printf("Enter the number of numbers you want to enter in the array : "); 
    scanf("%d",&n); 

    int numbers[n]; // array declaration 

    //take input from the user in the array 
    printf("Enter the values : "); 
    for(i=0 ; i<n ; i++)
    scanf("%d",&numbers[i]); 

    //print output of the values stored in the array
    printf("Entered values are : ");
    for(i=0 ; i<n ; i++)
    printf("%d ",numbers[i]);

    return 0; 
}