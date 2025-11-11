#include<stdio.h>

void add();
void sub(int x,int y);
int mul(int x,int y);
int div();
int main()
{
    int choice;
    int a,b,ans;

    while(1)
    {
        printf("\n1------add");
        printf("\n2------subtraction");
        printf("\n3------multiply");
        printf("\n4------divide");
        printf("\n5------exit");
        printf("\nEnter the choice..");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:add();
                break;
            case 2:printf("\nEnter the value of a and b");
                   scanf("%d%d",&a,&b);
                   sub(a,b);
                   break;
            case 3: printf("\nEnterr the value of a and b");
                    scanf("%d%d",&a,&b);
                    ans=mul(a,b);
                    printf("\nThe multi of %d and %d is %d",a,b,ans);
                    break;
            case 4: ans = div();
                    printf("\nThe ans is %d",ans);
                    break;
            case 5:exit(0);
        }
        return 0;
    }
}
void add()
{
    int x,y,z;
    printf("\nEnter the value of x and y");
    scanf("%d%d",&x,&y);
    z=x+y;
    printf("\nThe value of z : %d",z);
}
void sub(int x,int y)
{
    int z;
    z=x-y;
    printf("\nthe sub of %d and %d : %d",x,y,z);
}
int mul(int x,int y)
{
    int z;
    z=x*y;
    return z;
}
int div()
{
    int x,y,z;
    printf("\nEnter the value of x and y");
    scanf("%d%d",&x,&y);
    z=x/y;
    return z;
}