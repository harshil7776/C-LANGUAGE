/*
#include <stdio.h>

int main()
{
    char name1[15], name2[15];
    int i, j, len1 = 0, len2 = 0, flag = 1;

    printf("\nEnter name1 : ");
    gets(name1);

    printf("\nEnter name2 : ");
    gets(name2);

    // len name1
    for (i = 0; name1[i] != '\0'; i++)
    {
        len1++;
    }

    // len name2
    for (i = 0; name2[i] != '\0'; i++)
    {
        len2++;
    }

    if (len1 == len2)
    {
        for (i = 0, j = 0; i < len1; i++, j++)
        {
            if (name1[i] != name2[j])
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            printf("\nBoth names are same..");
        }
        else
        {
            printf("\nBoth names are not same..");
        }
    }
    else
    {
        printf("\nBoth names are different..");
    }

    printf("\nName1 : %s", name1);
    printf("\nName2 : %s", name2);

    return 0;
}
*/
#include <stdio.h>
int strcompare(char name1[], char name2[])
{
    int i, j, len1 = 0, len2 = 0, flag = 1;

    for (i = 0; name1[i] != '\0'; i++)
    {
        len1++;
    }
    for (i = 0; name2[i] != '\0'; i++)
    {
        len2++;
    }

    if (len1 == len2)
    {
        for (i = 0, j = 0; i < len1; i++, j++)
        {
            if (name1[i] != name2[j])
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
    return 0;
}

int main()
{
    char name1[15], name2[15];
    int result, i, j, len1 = 0, len2 = 0, flag = 1;

    printf("\nENter name1 : ");
    gets(name1);

    printf("\nEnter name2 : ");
    gets(name2);

    result = strcompare(name1, name2);

    if (result)
    {
        printf("\nBoth names are same...");
    }
    else
    {
        printf("\nBoth names are diff...");
    }
    printf("\nNAme1 : %s", name1);
    printf("\nNAme2 : %s", name2);

    return 0;
}