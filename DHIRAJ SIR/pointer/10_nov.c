#include <stdio.h>
#include <conio.h>
int main()
{
    int a = 2;
    int b = 4;
    float p, q;
    p = 33.45;
    char ch = 'A', ch1 = 'B';
    q = 77.55;
    int *x;
    char *ch2;
    float *r;

    x = &a;
    printf("%d---%u", *x, x);
    x = &b;
    printf("\n%d---%u", *x, x);
    r = &p;
    printf("\n%f---%u", *r, r);
    r = &q;
    printf("\n%f---%u", *r, r);
    ch2 = &ch;
    printf("\n%c---%u", *ch2, ch2);
    ch2 = &ch1;
    printf("\n%c---%u", *ch2, ch2);

    return 0;
}