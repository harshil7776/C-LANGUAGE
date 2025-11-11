// #include <stdio.h>

// int main()
// {
//     char name[5], i, len = 0;

//     printf("\nEnter name : ");
//     gets(name);
//     printf("\nString reverse : %s", strrev(name));
//     /* for(i=0;name[i]!='\0';i++)
//     {
//         len++;
//     }

//         for(i=(len-1);i>=0;i--)
//         {
//             printf("%c",name[i]);
//         }
//     */
//     return 0;
// }

// == == == == == == == == == == == == == == == == == ==
//     int main()
// {

//     char name1[5], name2[5], i, len = 0;

//     printf("\nEnter name1 : ");
//     gets(name1);

//     strcpy(name2, name1);

//     printf("\nName1 : %s", name1);
//     printf("\nName2 : %s", name2);

//     // printf("\nlowercase : %s",strlwr(name));
//     // printf("\nuppercase : %s",strupr(name));

//     return 0;
// }
// == == == == == == == == == == == == == == == == == ==
//     int main()
// {
//     char name1[5], name2[5];

//     printf("\nEnter name1 : ");
//     gets(name1);

//     printf("\nEnter name2 : ");
//     gets(name2);

//     if (strcmp(name1, name2) == 0)
//     {
//         printf("\nBoth names are same...");
//     }
//     else
//     {
//         printf("\nBoth name are not same..");
//     }
//     return 0;
// }
// //====================================
// int main()
// {
//     char name1[25], name2[5];

//     printf("\nEnter name1 : ");
//     gets(name1);

//     printf("\nEnter name2 : ");
//     gets(name2);

//     strcat(name1, name2);

//     printf("\nName1 : %s", name1);
//     printf("\nName2 : %s", name2);

//     return 0;
// }