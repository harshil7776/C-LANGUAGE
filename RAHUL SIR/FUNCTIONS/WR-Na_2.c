#include<stdio.h>

int primeFun();

int main()
{
    int flag;

    flag = primeFun();

    if(flag)
    {
        printf("\nNo is prime...");
    }else
    {
        printf("\nNo is Not prime...");
    }
    return 0;
}
int primeFun()
{
    int no,fc=0,i;

    printf("\nEnter no : ");
    scanf("%d",&no);

    for(i=1;i<=no;i++)
    {
        if(no%i==0)
        {
            fc++;
        }
    }
    if(fc==2)
    {
        return 1;
    }else
    {
        return 0;
    }
}