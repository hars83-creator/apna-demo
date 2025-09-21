//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/

#include<stdio.h> 

int main() 
{
    int n1 , n2 , i ; 

printf("Enter the length of the first array : "); 
    scanf("%d",&n1) ;
    
printf("Enter the length of the second array : "); 
    scanf("%d",&n2) ; 

int array01[n1] , array02[n2]; 

printf("Enter the elements of the first array \n"); 
    for(i=0 ; i<n1 ; i++)
    scanf("%d",&array01[i]) ; 

printf("Enter the elements of the second array \n"); 
    for(i=0 ; i<n2 ; i++)
    scanf("%d",&array02[i]) ; 

    int merged[n1+n2] ; 
printf("Merged array is \n") ; 

// now merge both the arrays to a third array 
    for(i=0 ; i<n1 ; i++)
    merged[i] = array01[i]; 
    for(i=n1 ; i<n1+n2 ; i++)
    merged[i] = array02[i+1-n2]; 

    //output of the merged array 
    for(i=0 ; i<n1+n2 ; i++)
    printf("%d ",merged[i]) ; 

    return 0 ; 
}