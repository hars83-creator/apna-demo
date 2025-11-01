/* Q107: Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.


Sample Test Cases:
Input 1:
arr = [1, 3, 2, 4]
Output 1:
-1, -1, 3, -1

Input 2:
arr = [6, 8, 0, 1, 3]
Output 2:
-1, -1, 8, 8, 8

Input 3:
arr = [1, 2, 3, 5]
Output 3:
-1, -1, -1, -1

Input 4:
arr = [5, 4, 3, 1]
Output 4:
-1, 5, 4, 3

*/
#include <stdio.h>
int main() {
    int count;
    printf("Enter number of elements: ");

    scanf("%d", &count);

    int numbers[count];
    
    printf("Enter the elements:\n");

    for(int index = 0; index < count; index++) {

        scanf("%d", &numbers[index]);
    }
 for(int i = 0; i < count; i++) {
        int found = -1;
        
        for(int k = i - 1; k >= 0; k--) {


            if(numbers[k] > numbers[i]) {
     found = numbers[k];
                break;
    }
        }

        if(i == count - 1) {
            printf("%d", found);

        } else {
            printf("%d, ", found);
        }
    }

    return 0;
}
