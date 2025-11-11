// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char name1[30], name2[30], name3[30];
//     int len1, len2, x;

//     printf("\nEnter the first string : ");
//     gets(name1);

//     printf("\nEnter the Secong string : ");
//     gets(name2);

//     printf("\nThe two string are %s and %s", name1, name2);
//     len1 = strlen(name1);

//     len2 = strlen(name2);

//     printf("\nThe length of first is %d and 2nd is %d", len1, len2);
//     strcat(name1, name2);

//     printf("\nThe string name1 is %s", name1);
//     strrev(name2);
//     printf("\nThe reverse of the string is %s", name2);
//     strupr(name1);
//     printf("\nThe upper case is %s", name1);
//     strlwr(name1);
//     printf("\nThe lower case is %s", name1);

//     x = strcmp(name1, name2);

//     if (x == 0)
//     {
//         printf("\nThe string are equal...");
//     }
//     else
//     {
//         printf("\nThe string are not equal...");
//     }

//     return 0;
// }

#include <stdio.h>
#include <string.h>
int main()
{
    int name1[30];
    int len, i, count;

    printf("\nEnter the first string  :");
    gets(name1);

    len = strlen(name1);

    for (i = 0; i < len; i++)
    {
        if (name1[i] == 'a' || name1[i] == 'e' || name1[i] == 'i' || name1[i] == 'o' || name1[i] == 'u')
        {
            count++;
        }
    }
    printf("\nThe number of vowels are  : %d", count);

    return 0;
}
//count number of vowels of eg : a=2   e=3  i=5
