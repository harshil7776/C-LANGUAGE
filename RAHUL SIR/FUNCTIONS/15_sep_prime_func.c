// #include <stdio.h>
// //NR-Na
// void primeFun();

// int main()
// {
//     primeFun();

//     return 0;
// }
// void primeFun()
// {
//     int i, j, fc = 0, no;

//     for (i = 1; i <= 100; i++)
//     {
//         no = i;
//         fc = 0;
//         for (j = 1; j <= no; j++)
//         {
//             if (no % j == 0)
//             {
//                 fc++;
//             }
//         }
//         if (fc == 2)
//         {
//             printf("\t%d", no);
//         }
//     }
// }
//=========================================
// NR-WA
#include <stdio.h>
int main()
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        isPrime(i);
    }
    return 0;
}
int isPrime(int no)
{
    int i, fc = 0;

    for (i = 1; i <= no; i++)
    {
        if (no % i == 0)
        {
            fc++;
        }
    }
    if (fc == 2)
    {
        printf("%d\t", no);
    }
}