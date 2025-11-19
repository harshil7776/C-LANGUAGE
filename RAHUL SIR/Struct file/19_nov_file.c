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
    struct Employee e1 = {1,"harshil",70000,"IT"};
    FILE *fp;

    fp= fopen("list.txt","wb");

    fwrite(&e1,sizeof (struct Employee),1,fp);
    fclose(fp);

    return 0;
}