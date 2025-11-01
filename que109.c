// Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/
#include <stdio.h>

int main() {
    int size;
    printf("Enter number of elements: ");
    scanf("%d", &size);
    int values[size];
    
    printf("Enter the elements:\n");
    for(int idx = 0; idx < size; idx++) {
        scanf("%d", &values[idx]);
    }
int window;
printf("Enter subarray size k: ");
scanf("%d", &window);
int maxTotal = 0;
    // Calculate initial window sum
 for(int i = 0; i < window; i++) {
maxTotal += values[i];
    }
     int currentTotal = maxTotal;
for(int j = window; j < size; j++) {
        currentTotal = currentTotal - values[j - window] + values[j];
        if(currentTotal > maxTotal) {
             maxTotal = currentTotal;
        }
    }
printf("%d", maxTotal);

    return 0;
}
