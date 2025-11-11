// #include <stdio.h>

// int main()
// {
//     int no1, no2, no3, *ptr;

//     printf("\n&no1 : %u", &no1);
//     printf("\n&no2 : %u", &no2);
//     printf("\n&no3 : %u", &no3);
//     printf("\n&ptr : %u", &ptr);

//     ptr = &no1;

//     printf("\nEnter no1 : ");
//     scanf("%d", ptr);

//     ptr = ptr - 1;
//     printf("\nptr : %u", ptr);

//     printf("\nEnter no2 : ");
//     scanf("%d", ptr);

//     ptr = ptr - 1;
//     printf("\nptr : %u", ptr);

//     printf("\nEnter no3 : ");
//     scanf("%d", ptr);

//     ptr = &no1;

//     printf("\nNo1 : %u", *ptr);
//     ptr--;

//     printf("\nNo2 : %u", *ptr);
//     ptr--;

//     printf("\nNo3 : %u", *ptr);
//     ptr--;

//     return 0;
// }

//=================
// using array scan and display...

// #include<stdio.h>
// int main()
// {
//     int i,a[5],*ptr,sum=0;

//     printf("\n&A[0] : %u",&a[0]);
//     printf("\n&A[1] : %u",&a[1]);
//     printf("\n&A[2] : %u",&a[2]);
//     printf("\n&A[3] : %u",&a[3]);
//     printf("\n&A[4] : %u",&a[4]);

//     ptr = &a;

//     for(i=0;i<5;i++)
//     {
//         printf("\nEnter A[%d] : ",i);
//         scanf("%d",ptr);
//         sum = sum + *ptr;
//         ptr++;
//     }
//     ptr = &a;
//     for(i=0;i<5;i++)
//     {
//         printf("\nA[%d] : %u",i,*ptr);
//         ptr++;
//     }
//     printf("\nSum : %d",sum);
// }

//=============================================
// pointer wit function....
#include <stdio.h>

void swap(int *no1, int *no2)
{
    int temp;

    temp = *no1;
    *no1 = *no2;
    *no2 = temp;
}
int main()
{
    int no1, no2;

    printf("\nEnter no1 :  ");
    scanf("%d",&no1);

    printf("\nEnter no2 :  ");
    scanf("%d",&no1);

    swap(&no1, &no2);

    printf("\nNo1 : %d", no1);
    printf("\nNo2 : %d", no2);

    return 0;
}