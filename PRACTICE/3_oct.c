// #include <stdio.h>
// int main()
// {
//     int sum = 0, a[5], i;
//     float avg=0;

//     for (i = 0; i < 5; i++)
//     {
//         printf("\nEnter A[%d] : ", i);
//         scanf("%d", &a[i]);
//     }

//     // sum = getSumofArr(a);

//     avg = getAvgofArr(a);

//     printf("\nSum : %d", sum);

//     return 0;
// }
// // int getSumofArr(int a[])
// // {
// //     int i, sum = 0;

// //     for (i = 0; i < 5; i++)
// //     {
// //         sum = sum + a[i];
// //     }
// //     return sum;
// // }
// float getAvgofArr(int a[])
// {
//     int i , sum=0;

//     for(i=0;i<5;i++)
//     {
//         sum = sum + a[i];
//     }
//     return sum/5.0;
// }
//=============================
#include <stdio.h>

float getAvgofArr(int a[]);

int main()
{
    int sum = 0, a[5], i;
    float avg = 0;

    for (i = 0; i < 5; i++)
    {
        printf("\nEnter A[%d] : ", i);
        scanf("%d", &a[i]);
    }

    avg = getAvgofArr(a);

    printf("\nAverage : %.2f", avg);

    return 0;
}

float getAvgofArr(int a[])
{
    int i, sum = 0;

    for (i = 0; i < 5; i++)
    {
        sum = sum + a[i];
    }
    return sum / 5.0;  
}