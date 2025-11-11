#include <stdio.h>

void addFun();

void main()
{
    addFun();
    printf("\n------------");

    addFun();
    printf("\n------------");

    addFun();
    printf("\n------------");

    return 0;
}
void addFun()
{
    int no1, no2, ans;

    printf("\nEnter no1 : ");
    scanf("%d", &no1);

    printf("\nEnter no2 : ");
    scanf("%d", &no2);

    ans = no1 + no2;

    printf("\nAddition : %d", ans);
}
