// Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

/*
Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2

*/
#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);

    int arr[size];
    int total_sum = size * (size + 1) / 2;
    int sum_of_elements = 0;

    for (int idx = 0; idx < size; idx++) {
        scanf("%d", &arr[idx]);
        sum_of_elements += arr[idx];
    }

    int missing = total_sum - sum_of_elements;
    printf("%d\n", missing);

    return 0;
}
