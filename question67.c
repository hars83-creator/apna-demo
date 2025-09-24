// Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/

#include <stdio.h>

int main() 
{
    int n;
    // input the length of the array 
    printf("Enter the length of the array : "); 
    scanf("%d", &n);
    // declare the array with one element more than that the number entered by the user 
    int arr[n+1];

    // input array elements
    for (int i = 0;i < n;i++) 
    {
        scanf("%d",&arr[i]);
    }

    int pos,element;
    // input the positon and the number you want to insert on that position 
    printf("Enter the index and the number \n"); 
    scanf("%d%d",&pos,&element);

    // shift elements to the right starting from the last element
    for (int i = n - 1; i >= pos; i--) 
    {
        arr[i + 1] = arr[i];
    }

    // insert key at given position
    arr[pos] = element ;

    // print updated array
    for (int i = 0; i <= n; i++) 
    {
        printf("%d ",arr[i]);
    }

    return 0;
}