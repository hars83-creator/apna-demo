 // Q131: Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
SUNDAY = 0
MONDAY = 1
TUESDAY = 2
WEDNESDAY = 3
THURSDAY = 4
FRIDAY = 5
SATURDAY = 6

*/
#include <stdio.h>

enum week_day {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    enum week_day d;
    for (d = SUNDAY; d <= SATURDAY; d = (enum week_day)(d + 1)) {
        if (d == SUNDAY)
            printf("SUNDAY = %d\n", d);
        else if (d == MONDAY)
            printf("MONDAY = %d\n", d);
        else if (d == TUESDAY)
            printf("TUESDAY = %d\n", d);
        else if (d == WEDNESDAY)
            printf("WEDNESDAY = %d\n", d);
        else if (d == THURSDAY)
            printf("THURSDAY = %d\n", d);
        else if (d == FRIDAY)
            printf("FRIDAY = %d\n", d);
        else if (d == SATURDAY)
            printf("SATURDAY = %d\n", d);
    }
    return 0;
}
