// Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:


*/

#include<stdio.h> 

int main()
{
    int n , i , num , found=0 ; 
    printf("Enter the length of the array : "); 
    scanf("%d",&n); 

    int input[n];
    
    printf("Enter the numbers \n"); 
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&input[i]); 
    }

    printf("Enter the number you want to search : "); 
    scanf("%d",&num); // the number user want to search for 

    for(i=0 ; i<n ; i++)
    {
        if(input[i] == num)// linearly checkk if the number is equal to any number entered in the array 
    {
        printf("%d found at index %d\n",num,i);
        found++ ; //increment operator if number is found 
    } 
    }

    if(found==0)//if the number is not in the array ,found remains 0 so we can check using this condition 
    printf("%d is not found in the array ",num); 

    return 0 ; 
}