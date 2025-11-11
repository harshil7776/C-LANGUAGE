#include <stdio.h>

void palindromeFun(int no);
int main()
{
    int no;

    printf("\nEnter no : ");
    scanf("%d", &no);

    palindromeFun(no);
    return 0;
}

void palindromeFun(int no)
{
    int temp, rev = 0, dup;
    
    dup = no;

    while (no > 0)
    {
        temp = no % 10;
        rev = (temp * 10) + temp;
        no = no / 10;
    }
    if (dup == rev)
    {
        printf("\n%d is palindrome no", dup);
    }
    else
    {
        printf("\n%d is Not palindrome no", dup);
    }
}