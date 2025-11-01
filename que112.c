// Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

/*
Sample Test Cases:
Input 1:
arr[] = [2, 3, -8, 7, -1, 2, 3]
Output 1:
11

Input 2:
arr[] = [-2, -4]
Output 2:
-2

Input 3:
arr[] = [5, 4, 1, 7, 8]
Output 3:
25

*/
#include <stdio.h>

int findMaxSum(int nums[], int length) {
    int best_sum = nums[0], temp_sum = 0;
    for (int idx = 0; idx < length; idx++) {
        temp_sum += nums[idx];
        if (temp_sum > best_sum) {
            best_sum = temp_sum;
        }
        if (temp_sum < 0) {
            temp_sum = 0;
        }
    }
    if (best_sum == 0) { 
        // handle all negative case, find max element manually
        best_sum = nums[0];
        for (int idx = 1; idx < length; idx++) {
            if (nums[idx] > best_sum) {
                best_sum = nums[idx];
            }
        }
    }
    return best_sum;
}

int main() {
    int size;
    scanf("%d", &size);
    int array[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    int result = findMaxSum(array, size);
    printf("%d\n", result);
    return 0;
}
