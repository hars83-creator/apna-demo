// Q116: Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".

/*
Sample Test Cases:
Input 1:
nums = [2,7,11,15], target = 9
Output 1:
0 1

Input 2:
nums = [3,2,4], target = 6
Output 2:
1 2

Input 3:
nums = [3,3], target = 6
Output 3:
0 1

*/
#include <stdio.h>
int main() {
    int n, tgt;

scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {


scanf("%d", &arr[i]);
    }
    scanf("%d", &tgt);

    int found_i = -1, found_j = -1;

for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
 if (arr[i] + arr[j] == tgt) {


found_i = i;
 found_j = j;
    break;
            }
 }
        if (found_i != -1) {
            break;
 }
    }

    printf("%d %d\n", found_i, found_j);
    return 0;
}
