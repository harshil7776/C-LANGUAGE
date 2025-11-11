// #include<stdio.h>
// int avgArr(int a[]);
// int main()
// {
//     int i,a[10],avg;

//     for(i=0;i<10;i++)
//     {
//         printf("Enter value off A[%d] : ",i);
//         scanf("%d",&a[i]);
//     }
//     avg = avgArr(a);
//     printf("\nAverage : %d",avg);
// }

// int avgArr(int a[])
// {
//     int i,sum=0;

//     for(i=0;i<10;i++)
//     {
//         sum = sum + a[i];
//     }
// }

/*
write a function which takes 5 number in double as argument and
it prints the squareroot of all five numbers.
*/
// #include <stdio.h>
// #include <math.h>
// #define SIZE 5
// void sqRoot(double a[]);
// int main()
// {
//     double a[SIZE];
//     int i;

//     for(i=0;i<SIZE;i++)
//     {
//         printf("\nEnter the number A[%d] : ",i);
//         scanf("%lf",&a[i]);
//     }
//     sqRoot(a);

//     return 0;
// }
// void sqRoot(double a[])
// {
//     int i;

//     for(i=0;i<SIZE;i++)
//     {
//         printf("\nThe square root of %lf is %lf",a[i],sqrt(a[i]));
//     }
// }

/*
write a function which take argument as string and print all the vowels of
the string...
*/
#include<stdio.h>
void vowelFun(char str[]);

int main()
{
    char str[90];

    printf("\nEnter a string : ");
    gets(str);

    vowelFun(str);
}
