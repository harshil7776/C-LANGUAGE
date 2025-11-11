#include <stdio.h>

// struct Employee
// {
//     int id,salary;
//     char name[50],dsgn[50]    ,orgname[50];

//     struct Address         ==> 1 way
//     {
//         char landmark[50];
//         char city[50];
//         char state[50];
//     }add;
// };
struct Address
{
    char landmark[50];
    char city[50];
    char state[50];
};
struct Employee
{
     int id,salary;
    char name[50],dsgn[50]    ,orgname[50];

    struct Address add;    
};
int main()
{
    struct Employee e[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("\nEnter id : ");
        scanf("%d", e[i].id);
        flushall();
        printf("\nEnter name : ");
        scanf("%s", e[i].name);
        printf("\nEnter salary : ");
        scanf("%d", e[i].salary);
        printf("\nEnter dsgn : ");
        scanf("%s", e[i].dsgn);
        printf("\nEnter orgname : ");
        scanf("%s", e[i].orgname);
        printf("\nEnter landmark : ");
        scanf("%s", e[i].add.landmark);
        printf("\nEnter city : ");
        scanf("%s", e[i].add.city);
        printf("\nEnter state : ");
        scanf("%s", e[i].add.state);
    }

    for (i = 0; i < 3; i++)
    {
        printf("\n%d\t%s\t%d\t%s\t%s\t%s\t%s\t%s", e[i].id, e[i].name, e[i].salary, e[i].dsgn, e[i].orgname, e[i].add.landmark, e[i].add.city, e[i].add.state);
    }
    return 0;
}
//====================================================x
// // Structure for product attributes
// struct Attributes 
// {
//     char category[30];
//     char manufacturer[50];
//     int warrantyMonths;
// };

// // Main Product structure
// struct Product 
// {
//     int productId;
//     char name[50];
//     float price;
//     struct Attributes attr;  // Nested structure
// };