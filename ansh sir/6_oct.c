
#include <stdio.h>

int main()
{
    char str[200];
    int i, count = 0;
    int Word = 0;

    printf("Enter a string: ");
    fgets(str, 200, stdin);

    for (i = 0; str[i] != '\0'; i++)
    {

        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
        {
            if (Word == 0)
            {
                count++;
                Word = 1;
            }
        }
        else
        {
            Word = 0;
        }
    }
    printf("Number of words = %d\n", count);

    return 0;
}
