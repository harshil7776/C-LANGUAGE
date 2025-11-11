// #include <stdio.h>
// int getMaxValue(int a[]);
// int main()
// {
//     int a[5], max, i;

//     for (i = 0; i < 5; i++)
//     {
//         printf("Enter the value A[%d] : ", i);
//         scanf("%d", &a[i]);
//     }

//     max = getMaxValue(a);

//     printf("\nIn main Maximum value : %d", max);

//     return 0;
// }
// int getMaxValue(int a[])
// {
//     int max = a[0], i;

//     for (i = 0; i < 5; i++)
//     {
//         if (a[i] > max)
//         {
//             max = a[i];
//         }
//     }
//     return max;
// }
//=============================================
// #include <stdio.h>

// int getSumofLastDigit(int a[]);
// int main()
// {
//     int a[10], OddDigitSum = 0, i, sum = 0;

//     for (i = 0; i < 10; i++)
//     {
//         printf("Enter the value A[%d] : ", i);
//         scanf("%d", &a[i]);
//     }

//     sum = getSumofLastDigit(a);
//     printf("\nSum of last digit : %d", sum);
//     return 0;
// }
// int getSumofLastDigit(int a[10])
// {
//     int sum = 0, i;

//     for (i = 0; i < 10; i++)
//     {
//         sum += a[i] % 10;
//     }
//     return sum;
// }

// ========================================
// #include <stdio.h>

// int getSumofFirstDigit(int a[]);
// int main()
// {
//     int a[10], sum = 0, i;

//     for (i = 0; i < 10; i++)
//     {
//         printf("Enter the value A[%d] : ", i);
//         scanf("%d", &a[i]);
//     }

//     sum = getSumofFirstDigit(a);
//     printf("\nSum of first digit : %d", sum);
//     return 0;
// }
// int getSumofFirstDigit(int a[10])
// {
//     int sum = 0, i,fd;

//     for (i = 0; i < 10; i++)
//     {
//         fd = a[i] / 10;
//         sum = sum + fd;
//     }
//     return sum;
// }
// ========================================
//print sum of all plndm value in array....
int getSumofPlndmValue(a);
int main()
{

}