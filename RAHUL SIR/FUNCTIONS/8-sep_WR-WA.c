// #include <stdio.h>

// int isPrime(int no);

// int main()
// {
//     int no, flag;

//     printf("Enter No : ");
//     scanf("%d", &no);

//     flag = isPrime(no);

//     if (flag)
//     {
//         printf("\nNo is prime : %d", no);
//     }
//     else
//     {
//         printf("\nNo is not prime : %d", no);
//     }
//     return 0;
// }
// // WR-WA
// int isPrime(int no)
// {
//     int i, fc = 0;

//     for (i = 1; i <= no; i++)
//     {
//         if (no % i == 0)
//         {
//             fc++;
//         }
//     }
//     return (fc == 2) ? 1 : 0;
// }
//=============================================
// #include <stdio.h>

// int isPrime(int no);

// int main()
// {
//     int no, flag, i;

//     for (i = 1; i <= 100; i++)
//     {
//         flag = isPrime(i);

//         if (flag)
//         {
//             printf("%d\t", i);
//         }
//     }
//     return 0;
// }
// // WR-WA
// int isPrime(int no)
// {
//     int i, fc = 0;

//     for (i = 1; i <= no; i++)
//     {
//         if (no % i == 0)
//         {
//             fc++;
//         }
//     }
//     return (fc == 2) ? 1 : 0;
// }

//========palindrome================

int isPalindrome(int no);
int main()
{
    int i;

    for (i = 1; i <= 1000; i++)
    {
        if (ispalindrome(i))
        {
            printf("%d\t", i);
        }
    }
    return 0;
}
int isPalindrome(int no)
{
    int dup, revNo = 0, temp;

    dup = no;

    while (no > 0)
    {
        temp = no % 10;
        revNo = (revNo * 10) + temp;
        no = no / 10;
    }
    no = dup;

    return (no == revNo) ? 1 : 0;
}