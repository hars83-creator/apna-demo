// Q148: Take two structs as input and check if they are identical.

/*
Sample Test Cases:
Input 1:
Student1: Asha 101 90
Student2: Asha 101 90
Output 1:
Same

*/
#include<stdio.h>
#include<string.h>

struct stu
{
    char nm[20];
    int r;
    int m;
};

int main()
{
    struct stu s1,s2;
    int i, flag = 0;

    printf("Enter Student 1\n");
    scanf("%s", s1.nm);
    scanf("%d", &s1.r);
    scanf("%d", &s1.m);

    printf("Enter Student 2\n");
    scanf("%s", s2.nm);
    scanf("%d", &s2.r);
    scanf("%d", &s2.m);

    if(s1.r == s2.r && s1.m == s2.m)
    {
        for(i=0; s1.nm[i] != '\0' || s2.nm[i] != '\0' ; i++)
        {
            if(s1.nm[i] != s2.nm[i])
            {
                flag = 1;
                break;
            }
        }

        if(flag==0)
            printf("Same");
        else
            printf("Not Same");
    }
    else
    {
        printf("Not Same");
    }

    return 0;
}
