#include<stdio.h>
int main()
{
    FILE *fp;
    char value;
    int fileSize=0;

    fp=fopen("test1.txt","r");

    while((value=fgetc(fp))!=EOF)
    {
        fileSize++;
        printf("%c",value);
    }
    fclose(fp);
    
}