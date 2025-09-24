//Q68: / Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/

#include<stdio.h> 

int main()
{
    int n , index , i ; 
    printf("Enter the length of the array : "); 
    scanf("%d",&n); 

    int num[n] ; 

    printf("Enter the elements of the array \n"); 
    for(i=0 ; i<n ; i++)
    scanf("%d",&num[i]); 

    printf("Enter the index of the array element you want to delete : ");
    scanf("%d",&index) ; 

    // shift elements left from index
    for (int i = index ; i < n - 1; i++) 
    {
        num[i] = num[i + 1];
    }

    printf("Deleted array : ") ; 
    for(i=0 ; i<n-1 ; i++)
    printf("%d ",num[i]); 

    return 0 ; 
}

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/

#include<stdio.h> 

int main()
{
    int n , index , i ; 
    printf("Enter the length of the array : "); 
    scanf("%d",&n); 

    int num[n] ; 

    printf("Enter the elements of the array \n"); 
    for(i=0 ; i<n ; i++)
    scanf("%d",&num[i]); 

    printf("Enter the index of the array element you want to delete : ");
    scanf("%d",&index) ; 

    // shift elements left from index
    for (int i = index ; i < n - 1; i++) 
    {
        num[i] = num[i + 1];
    }

    printf("Deleted array : ") ; 
    for(i=0 ; i<n-1 ; i++)
    printf("%d ",num[i]); 

    return 0 ; 
}