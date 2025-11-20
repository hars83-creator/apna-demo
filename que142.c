// Q142: Store details of 5 students in an array of structures and print all.

/*
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/

#include <stdio.h>

#define SIZE 5

// Define structure for student details
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student students[SIZE];

    // Input details for 5 students
    printf("Enter details of %d students (Name Roll Marks):\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Print all student details in tabular form
    printf("\nDetails of all students:\n");
    printf("Name\tRoll\tMarks\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%s\t%d\t%.2f\n", students[i].name, students[i].roll, students[i].marks);
    }

    return 0;
}
