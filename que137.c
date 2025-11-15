// Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include <stdio.h>

enum user_role {
    ADMIN,
    USER,
    GUEST
};



int main() {
    enum user_role current_role = GUEST;

    if (current_role == ADMIN) {
        printf("Welcome Admin!\n");


    } else if (current_role == USER) {
        printf("Welcome User!\n");
    } else if (current_role == GUEST) {
        printf("Welcome Guest!\n");
    } else {
        // fallback for undefined roles
    }


    
    return 0;
}
