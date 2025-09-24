// Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/

#include <stdio.h>

int main() 
{
    int n, element ; 
    // input the size of the array 
    printf("Enter the length of the array : ") ; 
    scanf("%d", &n);
    int arr[n];

    // input array elements (sorted)
    printf("Enter the elements of the arrays in ascending order \n"); 
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    // input the number you want to search 
    printf("Enter the number you want to search : ") ; 
    scanf("%d", &element); 

    int low = 0, high = n - 1, mid;
    int found = -1 ; // if the element was not in the array 

    while (low <= high) 
    {
        mid = (low + high) / 2;

        if(arr[mid] == element) 
        {
            found = mid;
            break;
        }
        else if(arr[mid] < element) 
        {
            low = mid + 1;
        }
        else 
        {
            high = mid - 1;
        }
    }

    if (found != -1)
        printf("Found at index %d\n", found);
    else
        printf("-1\n");

    return 0;
}