//Q24: Write a program to calculate an electricity bill based on units consumed.

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹950

Input 3:
250
Output 3:
Bill: ₹2200

*/
#include<stdio.h>
int main(){
    int days , bill;
    printf("Enter the unit of electricity consumed:");
    scanf("%d",&days);

    if(days<=50){
        bill= days*5;
        printf("The total electricity bill is %d",bill);
    }

    else if (days<=100 && days>50){
        bill= days * 8;
     printf("The total electricity bill is %d",bill);

    }
    else if (days>100){
        bill= days*10;
        printf("The total electricity bill is %d",bill);
    }
    return 0;
}