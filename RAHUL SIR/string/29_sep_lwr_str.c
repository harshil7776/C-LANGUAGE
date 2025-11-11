// #include <stdio.h>

// int main()
// {
//     int i;
//     char name[30];

//     printf("Enter name : ");
//     gets(name);

//     for (i = 0; name[i] != '\0'; i++)
//     {
//         if (name[i] >= 65 && name[i] <= 90)
//         {
//             name[i] = name[i] + 32;
//         }
//     }
//     printf("\nLower case name : %s", name);

//     return 0;
// }
//============================
// #include <stdio.h>

// int main()
// {
//     int i;
//     char name[30];

//     printf("Enter the name : ");
//     gets(name);

//     for (i = 0; name[i] != '\0'; i++)
//     {
//         if (name[i] >= 97 && name[i] <= 122)
//         {
//             name[i] = name[i] - 32;
//         }
//     }
//     printf("Upper case name : %s", name);

//     return 0;
// }
//=============NA-WA====================
#include <stdio.h>
// int main()
// {
//     char name[30];

//     printf("Enter name :");
//     gets(name);

//     lowerCase(name);
// }
// void lowerCase(char name[])
// {
//     int i;

//     for (i = 0; name[i] != '\0'; i++)
//     {
//         if (name[i] >= 65 && name[i] <= 90)
//         {
//             name[i] = name[i] + 32;
//         }
//     }
//     printf("\nLower case name : %s", name);
// }
//===================
int main()
{
    char name[30];

    printf("Enter name : ");
    gets(name);

    upperCase(name);
}
void upperCase(char name[])
{
    int i;

    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] >= 97 && name[i] <= 122)
        {
            name[i] = name[i] - 32;
        }
    }
    printf("\nUpper case :%s", name);
}