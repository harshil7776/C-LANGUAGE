#include <stdio.h>
#define SIZE 2

struct Student
{
    int sid;
    char name[30];
    float fees;
    float comp, eng, maths, total, per;
    char grade;
} s[SIZE];

void scanStudentDetails();
void displayStudentDetails();
void calculateGrade(int i);
int search(int id);
void displayParticular(int i);

int main()   // fixed typo
{
    int choice;
    int index = -1, id;

    while (1)
    {
        printf("\n===== MENU =====");
        printf("\n1. Scan Student Details");
        printf("\n2. Display All Students");
        printf("\n3. Search by ID");
        printf("\n4. Exit");
        printf("\nEnter your choice : ");
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
            printf("\nEnter the id you want to search : ");
            scanf("%d",&id);
            index = search(id);
            if(index == -1)
            {
                printf("\nRecord not found..");
            }
            else
            {
                displayParticular(index);
            }
            break;

        case 4:
            printf("\nExiting program...");
            return 0;

        default:
            printf("\nInvalid choice. Try again.");
        }
    }
}

// input details of SIZE students
void scanStudentDetails()
{
    for(int i=0;i<SIZE;i++)
    {
        printf("\nEnter details for student %d:\n", i+1);
        printf("Enter ID: ");
        scanf("%d", &s[i].sid);
        printf("Enter Name: ");
        scanf("%s", s[i].name);
        printf("Enter Fees: ");
        scanf("%f", &s[i].fees);
        printf("Enter marks in Comp, Eng, Maths: ");
        scanf("%f %f %f", &s[i].comp, &s[i].eng, &s[i].maths);

        s[i].total = s[i].comp + s[i].eng + s[i].maths;
        s[i].per = s[i].total / 3.0;
        calculateGrade(i);
    }
}

// display all students
void displayStudentDetails()
{
    printf("\nsid\tname\tfees\tcomp\teng\tmaths\ttotal\tper\tgrade");
    for(int i=0;i<SIZE;i++)
    {
        printf("\n%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%c",
               s[i].sid, s[i].name, s[i].fees,
               s[i].comp, s[i].eng, s[i].maths,
               s[i].total, s[i].per, s[i].grade);
    }
}

// decide grade based on percentage
void calculateGrade(int i)
{
    if(s[i].per >= 75)
        s[i].grade = 'A';
    else if(s[i].per >= 60)
        s[i].grade = 'B';
    else if(s[i].per >= 45)
        s[i].grade = 'C';
    else
        s[i].grade = 'F';
}

// search student by ID
int search(int id)
{
    for(int i=0;i<SIZE;i++)
    {
        if(id == s[i].sid)
        {
            return i;
        }
    }
    return -1;
}

// display single student record
void displayParticular(int i)
{
    printf("\nsid\tname\tfees\ttotal\tper\tgrade");
    printf("\n%d\t%s\t%.2f\t%.2f\t%.2f\t%c",
           s[i].sid, s[i].name, s[i].fees,
           s[i].total, s[i].per, s[i].grade);
}
