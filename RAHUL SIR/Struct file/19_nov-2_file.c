#include<stdio.h>

struct Employee
{
    int id;
    char name[50];
    int salary;
    char dsgn[50];
};
int main()
{
    struct Employee e1;
    FILE *fp;

    fp= fopen("list.txt","rb");

    fread(&e1,sizeof (struct Employee),1,fp);
    fclose(fp);

    printf("\n%d\t%s\t%d\t%s",e1.id,e1.name,e1.salary,e1.dsgn);
    return 0;
}