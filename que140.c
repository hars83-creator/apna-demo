// Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
#include <stdio.h>

// Define enum Gender
typedef enum {
    MALE,
    FEMALE
} Gender;

// Define struct Person with a Gender field
typedef struct {
    Gender gender;
} Person;

// Function to print gender as a string
void printGender(Gender g) {
    if (g == MALE)
        printf("Male\n");
    else if (g == FEMALE)
        printf("Female\n");
    else
        printf("Unknown\n");
}

int main() {
    Person person;
    person.gender = MALE; // Sample input as per test case
    
    printGender(person.gender);

    return 0;
}
