// #include <stdio.h>

// int main()
// {
//     char str[100];
//     int len, i, count;

//     printf("Enter a stirng : ");
//     gets(str);

//     strupr(str);
//     printf("\nstrupr function\tupper case : %s", str);

//     i = 0;
//     while (i < strlen(str))
//     {
//         if (str[i] <= 65 && str[i] >= 90)
//         {
//             str[i] -= 32;
//         }
//         i++;
//     }
//     printf("\nloop\tuppercase : %s", str);
// }

int main()
{
    char str[5], i, len = 0;

    printf("\nEnter name : ");
    gets(str);
    printf("\nString reverse : %s", strrev(str));
    for (i = 0; str[i] != '\0'; i++)
    {
        len++;
    }

    for (i = (len - 1); i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    return 0;
}
