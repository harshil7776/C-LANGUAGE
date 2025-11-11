// #include<stdio.h>

// int main()
// {
//     char name1[30],name2[30];
//     int len1=0,i,len2=0;

//     printf("\nEnter the String 1 : ");
//     gets(name1);

//     printf("\nEnter the string 2 : ");
//     gets(name2);

//     for(i=0;name1[i] != '\0';i++)
//     {
//         len1++;
//     }

//     for(i=0;name2[i] != '\0';i++)
//     {
//         len2++;
//     }

//     printf("\nThe length of the string : %d",len1);
//     printf("\nThe length of the string : %d",len2);

//     return 0;
// }

// #include<stdio.h>

// int main()
// {
//     char name1[30],name2[30];
//     int len1=0,i,len2=0;
//     char revname1[30],revname2[30];
//     int j=0;

//     printf("\nEnter the String 1 : ");
//     gets(name1);

//     printf("\nEnter the string 2 : ");
//     gets(name2);

//     for(i=0;name1[i] != '\0';i++)
//     {
//         len1++;
//     }

//     for(i=len1-1;i>=0;i--)
//     {
//         revname1[j] = name1[i];
//         j++;
//     }
//     revname1[j] = '\0';

//     for(i=0;name2[i] != '\0';i++)
//     {
//         len2++;
//     }

//     for(i=len2-1;i>=0;i--)
//     {
//         revname2[j] = name2[i];
//         j++;
//     }

//     revname2[j] = '\0';

//     printf("\nThe reverse of %s is %s",name1,revname1);
//     printf("\nThe reverse of %s is %s",name2,revname2);

//     return 0;
// }

#include <stdio.h>

int main()
{
    char name1[30], name2[30], name3[30];
    int i, j = 0;
    int len1 = 0, len2 = 0 , len3=0;

    printf("\nEnter the string 1 : ");
    gets(name1);
    for (i = 0; name1[i] != '\0'; i++)
    {
        len1++;
    }

    printf("\nEnter the string 2 : ");
    gets(name2);

    for (i = 0; name2[i] != '\0'; i++)
    {
        len2++;
    }

    for (i = len1; i < len1 + len2; i++)
    {
        name1[i] = name2[j];
        j++;
    }

    printf("\nEnter the string 3 : ");
    gets(name3);

    for (i = 0; name3[i] != '\0'; i++)
    {
        len3++;
    }

    for(i=len2;i<len2+len3;i++)
    {
        name3[i] = name2[j];
        j++;
    }
    name3{i} = '\0';

    printf("\nThe concated string : %s",name1);

    return 0;
}
