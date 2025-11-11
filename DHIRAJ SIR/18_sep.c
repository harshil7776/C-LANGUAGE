// #include<stdio.h>
// int avgArr(int a[]);
// int main()
// {
//     int i,arr[10];
//     float avg;

//     for(i=0;i<10;i++)
//     {
//         printf("Enter A[%d] : ",i);
//         scanf("%d",&arr[i]);
//     }
//     avg = avgArr(arr);

//     printf("\nAverage : %.2f",avg);
// }
// int avgArr(int arr[])
// {
//     int i , sum = 0;

//     for(i=0;i<10;i++)
//     {
//         sum = sum + arr[i];
//     }
// }
#include<stdio.h>
#include<math.h>
void sqRoot(arr);
int main()
{
    double arr[5];
    int i;

    for(i=0;i<5;i++)
    {
        printf("\nEnter A[%d] : ",i);
        scanf("%lf",&arr[i]);
    }
    sqRoot(arr);

    return 0;
}
void sqRoot(double arr[])
{
    int i;

    for(i=0;i<5;i++)
    {
        printf("\nThe square root of %lf is %lf ",arr[i],sqrt(arr[i]));
    }
}