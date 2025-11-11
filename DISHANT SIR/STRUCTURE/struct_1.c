#include <stdio.h>

struct student
{
    int rollno, age;
    char name[20];
} s[90];

int main()
{
    int i, n;

    printf("Enter the number of student you want to store : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter the rollno of %d student : ", i + 1);
        scanf("%d", &s[i].rollno);

        printf("\nEnter the name of %d student : ", i + 1);
        scanf("%s", s[i].name);

        printf("\nEnter the age of %d student : ", i + 1);
        scanf("%d", &s[i].age);
    }
    printf("\nrollno\tname\tage\t\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\t%s\t%d\t\n", s[i].rollno, s[i].name, s[i].age);
    }

    for (i = 0; i < n; i++)
    {
        if (s[i].rollno % 2 == 0)
        {
            printf("name\t\n%s");
        }
    }
    return 0;
}