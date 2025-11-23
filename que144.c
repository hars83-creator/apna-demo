// Q144: Write a function that accepts a structure as parameter and prints its members.

/*
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

void show(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
}

int main() {
    struct Student x;
    char tag[20];
    char buffer[200];

    if (!fgets(buffer, sizeof(buffer), stdin)) {
        return 0;
    }

    sscanf(buffer, "%19s %49s %d %d", tag, x.name, &x.roll, &x.marks);

    show(x);
    return 0;
}
