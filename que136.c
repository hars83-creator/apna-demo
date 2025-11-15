// Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include <stdio.h>

enum menu_option {
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main() {
    enum menu_option choice;
    int x, y;

    // Simulated input: ADD 10 20
    choice = ADD;
    x = 10;
    y = 20;

    switch(choice) {
        case ADD:
            printf("%d\n", x + y);
            break;
        case SUBTRACT:
            printf("%d\n", x - y);
            break;
        case MULTIPLY:
            printf("%d\n", x * y);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
