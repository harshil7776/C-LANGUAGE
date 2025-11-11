#include<stdio.h>

void fact(int k)
{
    int i,fact=1;

    for(i=k;i>=1;i--)
    {
        fact *= i;
    }
    printf("Factorial of  %d is %d",k,fact);
}
int main()
{
    int no;

    printf("Enter no : ");
    scanf("%d",&no);

    fact(no);

    return 0;
}