// Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>
#include <stdlib.h>

struct emp {
    int eid;
    char ename[60];
    float sal;
};

int main() {

    struct emp e1, e2;
    FILE *f;

    f = fopen("empdata.bin","wb");
    if(f==NULL){
        printf("cant open file...\n");
        return 0;
    }

    printf("enter id : ");
    scanf("%d",&e1.eid);

    printf("enter name : ");
    scanf(" %[^\n]", e1.ename);

    printf("enter salary : ");
    scanf("%f",&e1.sal);

    fwrite(&e1, sizeof(struct emp), 1, f);
    fclose(f);

    printf("\nemployee saved ok\n\n");

    f = fopen("empdata.bin", "rb");
    if(f==NULL){
        printf("file read err\n");
        return 0;
    }

    fread(&e2, sizeof(struct emp), 1, f);
    fclose(f);

    printf("reading back frm file..\n");
    printf("id = %d\n", e2.eid);
    printf("name = %s\n", e2.ename);
    printf("salary = %0.2f\n", e2.sal);

    return 0;
}
