#include <stdio.h>
#include <stdlib.h> // for exit()

struct Student
{
    int sid;
    char name[30];
    float fees;
    float comp, eng, maths, total, per;
    char grade;
} s[7];

void scanStudentDetails();
void displayStudentDetails();
void calculateGrade(int i);

int main()
{
    int choice;

    while (1)
    {
        printf("\n1. Scan");
        printf("\n2. Display");
        printf("\n3. Exit");
        printf("\nEnter the choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            scanStudentDetails();
            break;
        case 2:
            displayStudentDetails();
            break;
        case 3:
            exit(0);
        }
    }
    return 0;
}

void scanStudentDetails()
{
    int i;
    for (i = 0; i < 7; i++)
    {
        printf("\nEnter the sid and name : ");
        scanf("%d%s", &s[i].sid, s[i].name);

        printf("Enter the fees : ");
        scanf("%f", &s[i].fees);

        printf("Enter the eng : ");
        scanf("%f", &s[i].eng);

        printf("Enter the comp : ");
        scanf("%f", &s[i].comp);

        printf("Enter the maths : ");
        scanf("%f", &s[i].maths);

        calculateGrade(i);
    }
}

void calculateGrade(int i)
{
    s[i].total = s[i].maths + s[i].eng + s[i].comp;
    s[i].per = s[i].total / 3;

    if (s[i].per >= 90)
    {
        s[i].grade = 'A';
    }
    else if (s[i].per >= 80)
    {
        s[i].grade = 'B';
    }
    else
    {
        s[i].grade = 'C';
    }
}

void displayStudentDetails()
{
    int i;
    printf("\nSid\tName\tFees\tComp\tEng\tMaths\tTotal\tPer\tGrade");
    for (i = 0; i < 7; i++)
    {
        printf("\n%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%c",
               s[i].sid, s[i].name, s[i].fees,
               s[i].comp, s[i].eng, s[i].maths,
               s[i].total, s[i].per, s[i].grade);
    }
}
