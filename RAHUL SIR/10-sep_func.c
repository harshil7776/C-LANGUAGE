#include <stdio.h>

int getSum(int no);
int getSumofOdd(int no);
int getSumofEven(int no);

int main()
{
    int no, oddSum, evenSum;

    printf("\nEnter no : ");
    scanf("%d", &no);

    oddSum = getSumofOdd(no);
    evenSum = getSumofEven(no);

    printf("\nOdd digit sum : %d", oddSum);
    printf("\nEven digit sum : %d", evenSum);

    return 0;
}
int getSumofOdd(int no)
{
    int oddSum, rev = 0, temp;
    while (no > 0)
    {
        temp = no % 10;

        if (temp % 2 == 1)
        {
            rev = (rev * 10) + temp;
        }
        no = no / 10;
    }
    oddSum = getSum(rev);

    return oddSum;
}
int getSumofEven(int no)
{
    int temp, evenSum, rev = 0;

    while (no > 0)
    {
        temp = no % 10;

        if (temp % 2 == 0)
        {
            rev = (rev * 10) + temp;
        }
        no = no / 10;
    }
    evenSum = getSum(rev);

    return evenSum;
}
int getSum(int no)
{
    int sum = 0, temp;

    while (no > 0)
    {
        temp = no % 10;
        sum = sum + temp;
        no = no / 10;
    }
    return sum;
}
