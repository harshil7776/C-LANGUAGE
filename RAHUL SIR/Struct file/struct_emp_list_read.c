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
    struct Employee e;
    FILE *fp;

    fp = fopen("emp_list.dat", "rb");
    while (fread(&e, sizeof(struct Employee), 1, fp))
    {
        printf("\n%d\t%s\t%d\t%s",e.id,e.name,e.salary,e.dsgn);
    }
    fclose(fp);

    return 0;
}