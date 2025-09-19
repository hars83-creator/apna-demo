// Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/

#include<stdio.h> 

int main()
{
    int n ,i ; 
    printf("Enter the length of the array : "); 
    scanf("%d",&n);

    int numbers[n]; 

    printf("Enter the numebrs \n"); 
    for(i=0 ; i<n ; i++)
    {
    scanf("%d",&numbers[i]); 
    }

    int even=0 , odd=0 ; 
    for(i=0 ; i<n ; i++)
    {
        if(numbers[i]%2 == 0)
        even++ ;
        else 
        odd++ ; 
    }

    printf("Even = %d , Odd = %d ",even,odd); 
    return 0; 
}