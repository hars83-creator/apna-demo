// Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/
#include <stdio.h>

struct Stud {
    char nm[50];
    int r;
    int m;
};

struct Stud pickTop(struct Stud a[], int n){
    int i, best = 0;
    for(i=1;i<n;i++){
        if(a[i].m > a[best].m){
            best = i;
        }
    }
    return a[best];
}

int main(){
    int n,i;
    struct Stud s[60];

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%s %d %d", s[i].nm, &s[i].r, &s[i].m);
    }

    struct Stud t = pickTop(s,n);

    printf("Top Student: %s | Roll: %d | Marks: %d\n", t.nm, t.r, t.m);

    return 0;
}
