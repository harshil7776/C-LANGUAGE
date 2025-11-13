#include<stdio.h>
int main()
{
    FILE *fp;
    char value;
    int fileSize = 0;

    fp = fopen("t1.txt","w");
    fputc('A',fp);
    fclose(fp);

    return 0;
}