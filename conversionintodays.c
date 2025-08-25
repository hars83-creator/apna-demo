//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include <stdio.h>

int main() {
    int totalSeconds;
    int hours, minutes, seconds;

    // Input total seconds from user
    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    // Conversion
    hours = totalSeconds / 3600;        // 1 hour = 3600 seconds
    minutes = (totalSeconds % 3600) / 60; // remaining minutes
    seconds = totalSeconds % 60;          // remaining seconds

    // Output in hh:mm:ss format
    printf("Time is %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
