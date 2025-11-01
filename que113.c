// Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.

/*
Sample Test Cases:
Input 1:
arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
Output 1:
5

Input 2:
arr[] = [7, 10, 4, 3, 20, 15], k = 3
Output 2:
7

*/
#include <stdio.h>
void swap(int *a, int *b) {
int tmp = *a;
    *a = *b;
     *b = tmp;
}

void sortArray(int data[], int len) {
    for (int i = 0; i < len - 1; i++) {
               for (int j = 0; j < len - i - 1; j++) {
 if (data[j] > data[j + 1]) {
 swap(&data[j], &data[j + 1]);
 }
 }
}
}

int findKthSmallest(int arr[], int n, int k) {
    sortArray(arr, n);
    return arr[k - 1];
}
int main() {
    int n, k;
    scanf("%d", &n);
    int inputArray[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &inputArray[i]);
    }
    scanf("%d", &k);
    int kthValue = findKthSmallest(inputArray, n, k);
    printf("%d\n", kthValue);
    return 0;
}
