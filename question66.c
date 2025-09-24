// Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/

#include <stdio.h>

int main() 
{
    int n, key;
    printf("Enter the length of the array : ") ; 
    scanf("%d",&n);   // input size of array

    int arr[n+1];  // take the size of array more than the numbers inputed as number has to inserted 

    // input array elements 
    printf("Enter the elements of the array in ascending order \n"); 
    for (int i = 0; i < n; i++) 
    {
        scanf("%d",&arr[i]);
    }
    // enter the element to br inserted 
    printf("Enter the number you want to insert : "); 
    scanf("%d",&key); // element to insert

    int i;
    // find position to insert
    for (i = n - 1; (i >= 0 && arr[i] > key); i--) 
    {
        arr[i + 1] = arr[i]; // shift elements to the right
    }

    // insert key at correct position
    arr[i + 1] = key;

    n++; // increase n to increase the size of the array 

    // print final array after insertion 
    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}