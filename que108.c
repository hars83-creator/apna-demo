// Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

/*
Sample Test Cases:
Input 1:
nums = [1,2,3,4]
Output 1:
[24,12,8,6]

Input 2:
nums = [-1,1,0,-3,3]
Output 2:
[0,0,9,0,0]

*/
#include <stdio.h>

int main() {
    int length;
    printf("Enter total numbers: ");
    scanf("%d", &length);
    int arr[length];
    
    printf("Enter all numbers:\n");
    for(int pos = 0; pos < length; pos++) {
 scanf("%d", &arr[pos]);
    }

 int result[length];

    for(int i = 0; i < length; i++) {
        int prod = 1;
  for(int j = 0; j < length; j++) {
if(j != i) {
    prod = prod * arr[j]; }
 }
result[i] = prod;
    }

    printf("[");
    for(int i = 0; i < length; i++) {
        if(i == length - 1) {
 printf("%d", result[i]);
        } else {
printf("%d, ", result[i]);
        }
    }
    printf("]");

    return 0;
}
