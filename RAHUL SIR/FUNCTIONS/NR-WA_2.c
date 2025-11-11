#include <stdio.h>
void primeFun(value1);
int main()
{
    int value1;

    printf("\nEnter No1 : ");
    scanf("%d", &value1);

    primeFun(value1);

    printf("\n============");

    printf("\nEnter no1 : ");
    scanf("%d", &value1);

    primeFun(value1);

    return 0;
}
void primeFun(int value1)
{
    int i, fc = 0;

    for (i = 1; i <= value1; i++)
    {
        if (value1 % i == 0)
        {
            fc++;
        }
    }
    if (fc == 2)
    {
        printf("\n%d is prime...", value1);
    }
    else
    {
        printf("\n%d is Not prime...", value1);
    }
}