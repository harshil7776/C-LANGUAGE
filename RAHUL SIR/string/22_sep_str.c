#include <stdio.h>

int getStrLength(char name[]);

int main()
{
    char name[7];
    int i, len = 0;

    printf("Enter name : ");
    // scanf("%s",&name);
    gets(name);

    // printf("\nName : %s",name);
    puts(name);

    len = getStrLength(name);
    printf("\nlength: %d",len);

    // len = strlen(name);
    /*
        for (i = 0; name[i] != '\0'; i++)
        {
            len++;
            printf("\nName[%d] : %c---%d", i, name[i], len);
        }
        printf("\nLength : %d", len);
    */
    return 0;
}
int getStrLength(char name[])
{
    int i, len = 0;

    for (i = 0; name[i] != '\0'; i++)
    {
        len++;
    }
    return len;
}