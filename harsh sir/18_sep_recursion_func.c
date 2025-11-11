// #include<stdio.h>
// int Exponent(int base,int power)
// {
//     if(power == 1)
//     {
//         return base;
//     }
//     return base * Exponent(base , power-1);
// }
// int main()
// {
//     int base,power,result;

//     printf("Enter Base and power : ");
//     scanf("%d%d",&base,&power);

//     result = Exponent(base,power);
//     printf("%d power %d is %d ",base ,power,result);

//     return 0;
// }
#include<stdio.h>
#include<string.h>

void reverseString(char a[] , int start , int end)
{
    int temp;
    if(start >= end)
    {
        return "";
    }
    temp = a[start];
    a[start] = a[end];
    a[end]= temp;

    reverseString(a,start+1,end-1);
}
int main()
{
    char str[100];

    printf("Enter the string : ");
    scanf("%s",&str);

    reverseString(str , 0 , strlen(str)-1);

    printf("Reversed String : %s",str);

    return 0;
}