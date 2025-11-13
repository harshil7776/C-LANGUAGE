#include <stdio.h>

// int main()
// {
//     int a[5], b[5], c[10];
//     int *y, *x;
//     int i, j, k;
//     int *z;

//     y = a;
//     x = b;
//     z = c;

//     for (i = 0; i < 5; i++)
//     {
//         printf("\nEnter the values : ");
//         scanf("%d", x + i);
//     }

//     for (i = 0; i < 5; i++)
//     {
//         printf("\n%d----%u", *(x + i), x + i);
//     }

//     for (j = 0; j < 5; j++)
//     {
//         printf("\nEnter the values : ");
//         scanf("%d", y + j);
//     }

//     for (j = 0; j < 5; j++)
//     {
//         printf("\n%d----%u", *(y + j), y + j);
//     }

//     for (k = 0; k < 5; k++)
//     {
//         *(z + k) = *(x + i) + *(y + j);
//     }

//     for (k = 0; k < 5; k++)
//     {
//         printf("\n%d----%u", *(z + k), z + k);
//     }

//     return 0;
// }
//=======================================
// task make calculator using pointer

int main()
{
    float no1, no2, ans = 0;
    char ch;
    float *p1, *p2, *res;

    p1 = &no1;
    p2 = &no2;
    res = &ans;

    printf("Ener no1 : ");
    scanf("%f", &no1);

    printf("Ener no2 : ");
    scanf("%f", &no2);

    printf("Enter (+,-,*,/)  : ");
    scanf(" %c", &ch);

    switch (ch)
    {
    case '+':
        *res = *p1 + *p2;
        break;
    case '-':
        *res = *p1 - *p2;
        break;
    case '*':
        *res = *p1 * *p2;
        break;
    case '/':
        *res = *p1 / *p2;
        break;
    default:
        printf("Invalid choice...");
        return 1;
    }

    printf("Result :  %f\n",  *res);

    return 0;
}
