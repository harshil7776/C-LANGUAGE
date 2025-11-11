#include <stdio.h>

struct Attribute
{
    char category[50], manufacture[50];
    int warrentyMonths;
};

struct Product
{
    int productid;
    char name[50];
    int price;
    struct Attribute a;
};
int main()
{
    struct Product p[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("\nEnter product id : ");
        scanf("%d", &p[i].productid);
        printf("\nEnter product name : ");
        scanf("%s", &p[i].name);
        printf("\nEnter product price : ");
        scanf("%d", &p[i].price);
        printf("\nEnter category of product : ");
        scanf("%s", &p[i].a.category);
        printf("\nEnter manufacture of product  : ");
        scanf("%s", &p[i].a.manufacture);
        printf("\nEnter warrenty product : ");
        scanf("%d", &p[i].a.warrentyMonths);
    }
    for (i = 0; i < 3; i++)
    {
        printf("\n%d\t%s\t%d\t%s\t%s\t%d", p[i].productid, p[i].name, p[i].price, p[i].productid, p[i].a.category, p[i].a.manufacture, p[i].a.warrentyMonths);
    }
    return 0;
}