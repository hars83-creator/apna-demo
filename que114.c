// Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>

int longestUniqueSegment(char array[]) {
    int positions[256];
    for (int i = 0; i < 256; i++) {
        positions[i] = -1;
    }

    int max_size = 0;
    int window_start = 0;

    for (int idx = 0; array[idx] != '\0'; idx++) {
        unsigned char current_char = (unsigned char)array[idx];
        if (positions[current_char] >= window_start) {
            window_start = positions[current_char] + 1;
        }
        positions[current_char] = idx;

        int current_length = idx - window_start + 1;
        if (current_length > max_size) {
            max_size = current_length;
        }
    }

    return max_size;
}

int main() {
    char buffer[1024];
    
    // Custom input reading avoiding standard scanf string input
    int pos = 0;
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF && pos < 1023) {
        buffer[pos++] = ch;
    }
    buffer[pos] = '\0';

    int answer = longestUniqueSegment(buffer);
    printf("%d\n", answer);

    return 0;
}
