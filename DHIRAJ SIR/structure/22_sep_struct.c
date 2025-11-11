#include <stdio.h>
#include <stdlib.h>
struct Student
{
    int sid;
    char name[30];
    float fees;

} s[10];

void scanDetails();
void displayDetails();

int main()
{
    int choice;

    while (1)
    {
        printf("\n1.Scan...");
        printf("\n2. Display...");
        printf("\n3. Exit...");
        printf("\nEnter the choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            scanDetails();
            break;

        case 2:
            displayDetails();
            break;

        case 3:
            exit(0);
        }
    }
    return 0;
}

void scanDetails()
{
    float temp;
    int i;
    for (i = 0; i < 10; i++)
    {

        printf("\nEnter the sid , name and fees : ");
        scanf("%d", &s[i].sid);
        scanf("%s", s[i].name);
        scanf("%f", &temp);
        s[i].fees = temp;
    }
}

void displayDetails()
{
    int i;

    printf("\nSid\tName\tFees");
    for (i = 0; i < 10; i++)
    {
        printf("\n%d\t%s\t%.2f", s[i].sid, s[i].name, s[i].fees);
    }
}
