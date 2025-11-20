//Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

/*
Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90

*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s;

    // Reading data for one student
    printf("Name: ");
    fgets(s.name, sizeof(s.name), stdin);

    // Remove newline character from fgets input
    int i = 0;
    while (s.name[i] != '\0') {
        if (s.name[i] == '\n') {
            s.name[i] = '\0';
            break;
        }
        i++;
    }

    printf("Roll: ");
    scanf("%d", &s.roll_no);

    printf("Marks: ");
    scanf("%d", &s.marks);

    // Printing the stored data
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);

    return 0;
}
