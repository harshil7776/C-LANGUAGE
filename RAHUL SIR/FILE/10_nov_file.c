#include <stdio.h>
#include <conio.h>

int main()
{
    FILE *fp;
    char buff[50];

    fp = fopen("text1.txt", "r");

    while (fscanf(fp, "%s", buff) != EOF)
    {
        printf("%s ", buff);
    }

    fclose(fp);

    return 0;
}