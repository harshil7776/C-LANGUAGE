#include <stdio.h>

int addFun();

int main()
{
    int result;

    result = addFun();

    printf("\nResult : %d", result);

    result = result + 1000;
    printf("\nResult + 1000 : %d", result);

    return 0;
}
int addFun()
{
    int no1, no2, ans;

    printf("\nEnter no1 : ");
    scanf("%d", &no1);

    printf("\nEnter no2 : ");
    scanf("%d", &no2);

    ans = no1 + no2;

    return ans;
}