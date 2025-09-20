// Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/

#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter the length of the array : "); // take input for the length of the array 
    scanf("%d",&n);

    int input[n], reverse[n]; // declared two arrays , one to store input and other for reverse 

    printf("Enter the numbers:\n");  // take input of numbers from the user 
    for(i=0; i<n; i++)
    {
        scanf("%d",&input[i]);
    }

    printf("Reverse of the array is:\n");
    for(i=0; i<n; i++)
    {
        reverse[i] = input[n-1-i]; // interchange the first and last number of the array 
        printf("%d ",reverse[i]);
    }

    return 0;
}