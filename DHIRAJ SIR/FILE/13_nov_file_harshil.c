#include<stdio.h>

int main()
{
    FILE *fp;
    char name[30];
    char str[30];

    fp=fopen("harshil.txt","w");
    printf("\nEnter String : ");
    gets(str);

    fprintf(fp,"%s",str);
    fclose(fp);
    fp=fopen("harshil.txt","r");

    while((fscanf(fp,"%s",name))!=EOF)
    {
        printf(" %s ",name);
    }
    fclose(fp);

    return 0;
}