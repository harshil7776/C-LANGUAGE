#include <stdio.h>

void addFun(int no1, int no2);
int main()
{
    int value1, value2;

    value1 = 100;
    value2 = 200;

    addFun(value1, value2);

    return 0;
}

void addFun(int no1, int no2)
{
    int ans;

    ans = no1 + no2;
    
    printf("\nAddition : %d", ans);
}
