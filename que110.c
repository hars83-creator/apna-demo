// Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1:
3 3 4 5 5 5 6

Input 2:
arr[5, 1, 3, 4, 2] = , k = 1
Output 2:
5 1 3 4 2

*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter total elements count: ");
    scanf("%d", &n);
    int nums[n];

    printf("Provide %d numbers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
int window_size;
    printf("Enter window size (k): ");
    scanf("%d", &window_size);
for(int start = 0; start <= n - window_size; start++) {
     int max_val = nums[start];
 for(int j = start + 1; j < start + window_size; j++) {
 if(nums[j] > max_val) {
                max_val = nums[j];
}}
 printf("%d", max_val);
if(start != n - window_size) {
                 printf(" ");
        }
    }
 return 0;
}
