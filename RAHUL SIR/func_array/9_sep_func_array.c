// #include<stdio.h>

// void getSumofArray();

// int main()
// {
//     getSumofArray();

//     return 0;
// }
// void getSumofArray()//NR-NA
// {
//     int a[5],i,sum=0;

//     for(i=0;i<5;i++)
//     {
//         printf("\nEnter A[%d] : ",i);
//         scanf("%d",&a[i]);
//     }

//     for(i=0;i<5;i++)
//     {
//         sum = sum + a[i];
//         printf("\nA[%d] : %d",i,a[i]);
//     }
//     printf("\nSum of Array : %d",sum);
// }

//NR-WA

// #include<stdio.h>

// void getSumofArray(int b[]);

// int main()
// {
//     int i,a[5];

//     for(i=0;i<5;i++)
//     {
//         printf("\nEnter A[%d] : ",i);
//         scanf("%d",&a[i]);
//     }

//     getSumofArray(a);

//     return 0;
// }
// //NR-WA
// void getSumofArray(int b[])
// {
//     int i,sum=0;

//     for(i=0;i<5;i++)
//     {
//         printf("\nb[%d] : %d",i,b[i]);
//         sum += b[i];
//     }
//     printf("\nSum of Array : %d",sum);
// }


//WR-NA--Array

// int main()
// {
//     int sum=0;

//     sum = getSumofArray();

//     printf("\nSum of Array : %d",sum);

//     return 0;
// }
// int getSumofArray()
// {
//     int a[5],i,sum=0;

//     for(i=0;i<5;i++)
//     {
//         printf("\nEnter A[%d] : ",i);
//         scanf("%d",&a[i]);
//         sum = sum + a[i];
//     }
//     return sum;
// }

//WR-WA--Array

#include<stdio.h>

int getSumofArray(int a[]);

int main()
{
    int a[5],i,sum=0;

    for(i=0;i<5;i++)
    {
        printf("\nEnter A[%d] : ",i);
        scanf("%d",&a[i]);
    }

    sum = getSumofArray(a);

    printf("\nSum : %d",sum);

    return 0;
}
//WR-WA
int getSumofArray(int a[])
{
    int i,sum=0;

    for(i=0;i<5;i++)
    {
        sum = sum + a[i];
    }
    return sum;
}
