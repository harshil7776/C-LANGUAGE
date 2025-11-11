#include <stdio.h>

struct Student
{
    int rno, std, marks;
    char name[50];
};
int main()
{
    struct Student s[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("Enter Rno : ");
        scanf("%d", &s[i].rno);
        printf("Enter name : ");
        scanf("%s", &s[i].name);
        printf("Enter std : ");
        scanf("%d", &s[i].std);
        printf("Enter marks : ");
        scanf("%d", &s[i].marks);
    }

    for (i = 0; i < 3; i++)
    {
        printf("\n%d\t%s\t%d\t%d", s[i].rno, s[i].name, s[i].std, s[i].marks);
    }
    return 0;
}