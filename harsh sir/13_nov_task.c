#include<stdio.h>

int main()
{
    int no1,no2,sum=0;
    int *p1,*p2;

    printf("Enter no1 : ");
    scanf("%d",&no1);

    printf("Enter no2 : ");
    scanf("%d",&no2);

    p1=&no1;
    p2=&no2;

    sum = *p1+*p2;

    printf("Sum = %d",sum);

    return 0;
}