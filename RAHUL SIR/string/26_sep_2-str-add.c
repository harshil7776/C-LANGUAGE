#include <stdio.h>
// int main()
// {
//     char fname[20], lname[20], fullname[50];
//     int i, j;

//     printf("\nEnter fname: ");
//     gets(fname);
//     printf("\nEnter lname: ");
//     gets(lname);

//     j = 0;
//     for (i = 0; fname[i] != '\0'; i++)
//     {
//         fullname[j] = fname[i];
//         j++;
//     }
//     fullname[j] = ' ';
//     j++;

//     for (i = 0; lname[i] != '\0'; i++)
//     {
//         fullname[j] = lname[i];
//         j++;
//     }
//     fullname[j] = '\0';
//     printf("\nFull name : %s", fullname);
//     return 0;
// }
//===================================================
int main()
{
    char stmt[30];
    int i,j,v=0,c=0,d=0,s=0;

    printf("Enter statement : ");
    gets(stmt);

    for(i=0;stmt[i]!='\0';i++)
    {
        if((stmt[i]=='a'||stmt[i]=='e'||stmt[i]=='i'||stmt[i]=='o'||stmt[i]=='u'))
        {
            v++;
        }else
        {
            c++;
        }
        if(isdigit(stmt[i]))
        {
            d++;
        }else if(isspace(stmt[i]))
        {
            s++;
        }
    }
    printf("\nTotoal Vowels : %d",v);
    printf("\nTotoal Consonants : %d",c);
    printf("\nTotoal Digit : %d",d);
    printf("\nTotoal space : %d",s);

    return 0;
}