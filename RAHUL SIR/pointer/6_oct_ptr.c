// #include<stdio.h>

// int main()
// {
//     int no,*ptr;

//     no = 10;
//     printf("\nNo value : %d",no);
//     printf("\n&No : %d",&no);
//     printf("\n--------------------------------------");
//     ptr=&no;
//     printf("\nptr value(&no) : %u",ptr);
//     printf("\n&ptr  : %u",&ptr);
//     printf("\n--------------------------------------");
//     printf("\nptr value(*ptr) : %d",*ptr);
//     printf("\n--------------------------------------");
//     *ptr=*ptr+100;
//     printf("\nptr value (*ptr+100) : %d",*ptr);
//     printf("\nNo value (no+100) : %d",no);
//     printf("\n--------------------------------------");
//     *ptr=2000;
//     printf("\nptr value(2000) : %d",*ptr);
//     printf("\nNo value (no+100) : %d",no);

//     return 0;

// }
#include <stdio.h>

int main()
{
    int no, *ptr, **ptrptr;
    no = 10;
    printf("\nNo value : %d", no);
    printf("\n&No : %d", &no);
    printf("\n--------------------------------------");
    ptr = &no;
    printf("\nptr value(&no) : %u", ptr);
    printf("\n&ptr  : %u", &ptr);
    printf("\n--------------------------------------");
    printf("\nptr value(*ptr) : %d", *ptr);
    printf("\n**ptrptr(ptr value | &no) : %u",**ptrptr);
    printf("\n--------------------------------------");
    **ptrptr = **ptrptr + 20000;
    printf("\n**ptrptr(no value + 20000) : %u",**ptrptr);
    printf("\nptr value (*ptr)+2000 : %d",*ptr);
    printf("\nNO value + 20000 : %d",no);

    return 0;
}