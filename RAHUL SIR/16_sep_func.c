// WR-NA
// #include <stdio.h>
// int isPrime();

// int main()
// {
//     int primeCount;

//     primeCount = isPrime();

//     printf("\nIn main Prime count[1-100] : %d", primeCount);

//     return 0;
// }
// int isPrime()
// {
//     int i, no, fc = 0, pc = 0,j;

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
//             pc++;
//             printf("%d\t", no);
//         }
//     }
//     return pc;
// }

// WR-WA=========================
#include <stdio.h>
int isPrime(int no1, int no2);

int main()
{
    int primeCount, no1, no2;

    printf("\nEnter No1 : ");
    scanf("%d", &no1);

    printf("\nEnter No2 : ");
    scanf("%d", &no2);

    primeCount = isPrime(no1, no2);

    printf("\nIn main Prime count[1-100] : %d", primeCount);

    return 0;
}
// WR-WA
int isPrime(int no1, int no2)
{
    int i, no, fc = 0, pc = 0, j;

    for (i = no1; i < no2; i++)
    {
        fc = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                fc++;
            }
        }
        if (fc == 2)
        {
            pc++;
            printf("%d\t", i);
        }
    }
    return pc;
}