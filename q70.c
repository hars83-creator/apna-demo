// Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/

#include<Stdio.h>

int main()
{
    int n , i , k ; 
    printf("Enter the length of the array : "); 
    scanf("%d",&n); 

    int arr[n]; 

    printf("Enter the elements of the array \n"); 
    for(i=0 ; i<n ; i++)
    scanf("%d",&arr[i]); 

    printf("Enter the number of rotations : "); 
    scanf("%d", &k);   // number of rotations
    k = k % n;         // handle if k > n

    int result[n];

    // rotate: place last k elements at the beginning
    for(int i = 0; i < n; i++) 
    {
        result[(i + k) % n] = arr[i];
    }

    // print rotated array
    for(int i = 0; i < n; i++) 
    {
        printf("%d ", result[i]);
    }

    return 0;

}