//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/

#include<stdio.h> 

int main()
{
    int n , i ; 
    printf("Enter the length of the array : "); 
    scanf("%d",&n); 

    int input[n];
    printf("Enter the numbers \n"); 
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&input[i]); 
    }

    int positive=0 , negative=0 , zeros=0 ;
    for(i=0 ; i<n ; i++)
    {
        if(input[i] > 0)
        positive++ ; 
        else if(input[i] < 0)
        negative++ ; 
        else 
        zeros++ ; 
    }

    printf("Positive = %d , Negative = %d , Zeros = %d ",positive,negative,zeros); 

    return 0 ; 
}