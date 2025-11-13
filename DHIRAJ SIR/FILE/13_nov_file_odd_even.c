#include <stdio.h>

int main()
{
    FILE *even, *odd;
    int no[10];
    
    odd = fopen("odd.txt", "w");
    even = fopen("even.txt", "w");

    printf("Enter no : ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &no[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (no[i] % 2 == 0)
        {
            fprintf(even, "%d\n", no[i]);
        }
        else
        {
            fprintf(odd, "%d", no[i]);
        }
    }

    fclose(odd);
    fclose(even);

    printf("\nOdd and even numbers...");

    return 0;
}