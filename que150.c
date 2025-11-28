// Q150: Use pointer to struct to modify and display data using -> operator.

/*
Sample Test Cases:
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91

*/
#include<stdio.h>

struct student
{
    char name[20];
    int roll;
    int marks;
};

int main()
{
    struct student s;
    struct student *p;

    p = &s;

    printf("Student pointer modifying values:\n");
    scanf("%s", p->name);
    scanf("%d", &p->roll);
    scanf("%d", &p->marks);

    printf("\nModified Data:\n");
    printf("Name: %s | Roll: %d | Marks: %d",
           p->name, p->roll, p->marks);

    return 0;
}
