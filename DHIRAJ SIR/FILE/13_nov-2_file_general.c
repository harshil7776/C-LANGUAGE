// #include <stdio.h>

// int main()
// {
//     FILE *fp;
//     char ch,character[30];
//     int i;

//     fp = fopen("general.txt", "w");

//     while ((ch = getchar()) != '\n')
//     {
//         putc(ch, fp);
//     }

//     fclose(fp);

//     fp = fopen("general.txt", "r");
//     while ((ch = getc(fp)) != EOF)
//     {
//         if ((character[i] == 'a' || character[i] == 'e' || character[i] == 'i' || character[i] == 'o' || character[i] == 'u'))
//         {
//             printf("%c", ch);
//         }
//     }
//     fclose(fp);

//     printf("Enter string : ");
//     gets(ch);


//     return 0;
// }
#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;

    fp = fopen("general.txt", "w");
    
    printf("Enter string : ");

    while ((ch = getchar()) != '\n')
    {
        putc(ch, fp);
    }
    fclose(fp);

    fp = fopen("general.txt", "r");
    
    printf("\nVowels in file: ");

    while ((ch = getc(fp)) != EOF)
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            printf("%c ", ch);
        }
    }

    fclose(fp);
    return 0;

}
