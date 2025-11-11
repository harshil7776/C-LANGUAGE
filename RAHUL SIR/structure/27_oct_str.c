#include <stdio.h>
#define SIZE 3

struct Student
{
    int rno, std, marks[5], total, avg;
    char name[50], grade;

} s[SIZE];

void scanStudent();
void calculateGrade();
void dispStudent();

void scanStudent()
{
    int i, j;
    for (i = 0; i < SIZE; i++)
    {
        printf("\nEnter Rno : ");
        scanf("%d", &s[i].rno);
        
        printf("\nEnter name : ");
        scanf("%s", &s[i].name);
        printf("\nEnter std : ");
        scanf("%d", &s[i].std);

        s[i].total = 0;

        for (j = 0; j < 5; j++)
        {
            printf("\nEnter marks[%d] : ", j);
            scanf("%d", &s[i].marks[j]);
            s[i].total = s[i].total + s[i].marks[j];
        }
        s[i].avg = s[i].total / 5;
    }
    calculateGrade();
}
void calculateGrade()
{
    int i;
    for (i = 0; i < SIZE; i++)
    {
        if (s[i].avg > 90)
        {
            s[i].grade = 'A+';
        }
        else if (s[i].avg > 80)
        {
            s[i].grade = 'A';
        }
        else if (s[i].avg > 70)
        {
            s[i].grade = 'B+';
        }
        else if (s[i].avg > 60)
        {
            s[i].grade = 'B';
        }
        else if (s[i].avg > 50)
        {
            s[i].grade = 'C+';
        }
        else if (s[i].avg > 40)
        {
            s[i].grade = 'C';
        }
        else
        {
            s[i].grade = 'F';
        }
    }
}
void dispStudent()
{
    int i, j;
    printf("\nRno\tName\tStd\tS1 S2 S3 S4 S5\tTotal\tAvg\tGrade");

    for (i = 0; i < SIZE; i++)
    {
        printf("\n%d\t%s\t%d\t", s[i].rno, s[i].name, s[i].std);

        for (j = 0; j < 5; j++)
        {
            printf(" %d ", s[i].marks[j]);
        }
        printf("\t%d\t%d\t%c", s[i].total, s[i].avg, s[i].grade);
    }
}
int main()
{
    scanStudent();

    dispStudent();

    return 0;
}