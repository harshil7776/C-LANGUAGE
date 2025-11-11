// // #include <stdio.h>
// // struct Student
// // {
// //     int rno;
// //     char name[50];
// //     int std;
// // };
// // struct Student scanData(struct Student s);
// // void displayData(struct Student s);

// // int main()
// // {
// //     struct Student s;

// //     s = scanData(s);

// //     displayData(s);

// //     return 0;
// // }
// // struct Student scanData(struct Student s)
// // {
// //     printf("\nEnter Rno : ");
// //     scanf("%d", &s.rno);
// //     printf("\nEnter name : ");
// //     scanf("%s", &s.name);
// //     printf("\nEnter std : ");
// //     scanf("%d", &s.std);

// //     return s;
// // }
// // void displayData(struct Student s)
// // {
// //     printf("\n%d\t%s\t%d", s.rno, s.name, s.std);
// // }

// //==================================
// // struct with func and array....
// #include <stdio.h>
// struct Student
// {
//     int rno;
//     char name[50];
//     int std;
// };
// struct Student scanData(struct Student s);
// void displayData(struct Student s);

// int main()
// {
//     struct Student s[3];
//     int i;

//     for (i = 0; i < 3; i++)
//     {
//         s[i] = scanData(s[i]);
//     }
//     for (i = 0; i < 3; i++)
//     {
//         displayData(s[i]);
//     }
//     return 0;
// }
// struct Student scanData(struct Student s)
// {
//     printf("\nEnter Rno : ");
//     scanf("%d", &s.rno);
//     printf("\nEnter name : ");
//     scanf("%s", &s.name);
//     printf("\nEnter std : ");
//     scanf("%d", &s.std);

//     return s;
// }
// void displayData(struct Student s)
// {
//     printf("\n%d\t%s\t%d", s.rno, s.name, s.std);
// }
//============================================
//Marksheet=====
#include <stdio.h>

struct Student {
    int rno, std, total;
    float avg;
    char name[50];
    int marks[3];
    char grade;
} s[3];

void calculateMarks();
void scanStudents();
void displayStudent();

void scanStudents() {
    int i, j;
    for (i = 0; i < 3; i++) {
        printf("\nEnter Rno: ");
        scanf("%d", &s[i].rno);

        printf("Enter Name: ");
        scanf("%s", s[i].name);  

        printf("Enter Std: ");
        scanf("%d", &s[i].std);

        s[i].total = 0;

        for (j = 0; j < 3; j++) {
            printf("Enter Marks[%d]: ", j);
            scanf("%d", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }

        s[i].avg = s[i].total / 3.0;  
    }
    calculateMarks();
}

void calculateMarks() {
    int i;
    for (i = 0; i < 3; i++) {
        if (s[i].avg > 90)
            s[i].grade = 'A';
        else if (s[i].avg > 70)
            s[i].grade = 'B';
        else if (s[i].avg > 50)
            s[i].grade = 'C';
        else
            s[i].grade = 'D';
    }
}

void displayStudent() {
    int i;
    printf("\nRno\tName\tStd\tTotal\tAvg\tGrade");
    for (i = 0; i < 3; i++) {
        printf("\n%d\t%s\t%d\t%d\t%.2f\t%c",
               s[i].rno, s[i].name, s[i].std, s[i].total, s[i].avg, s[i].grade);
    }
}

int main() {
    scanStudents();
    displayStudent();
    return 0;
}