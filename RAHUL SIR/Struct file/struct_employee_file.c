#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    int salary;
    char dsgn[50];
};
int main()
{
    struct Employee e[3] = {{1, "Harshil", 100000, "IT"}, {2, "Rahul", 20000, "DR"}, {3, "Raj", 30000, "SE"}};
    FILE *fp;

    fp = fopen("emp_list.dat", "wb");

    fwrite(&e, sizeof(struct Employee), 3, fp);

    fclose(fp);

    return 0;
}