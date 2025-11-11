#include <stdio.h>
// int getPalndm(int a[])
// {
//     int i, temp, rev = 0, no, pn = 0;

//     for (i = 0; i < 5; i++)
//     {
//         no = a[i];
//         rev = 0;

//         while (no > 0)
//         {
//             temp = no % 10;
//             rev = (rev * 10) + temp;
//             no = no / 10;
//         }
//         if (a[i] == rev)
//         {
//             pn++;
//             printf("\nA[%d] : %d", i, a[i]);
//         }
//     }
//     return pn;
// }

// int main()
// {
//     int pn = 0, a[5] = {123, 121, 454, 675, 989}, i;

//     pn = getPalndm(a);

//     printf("\nTotal palindrome : %d", pn);

//     return 0;
// }

//=====================
// Search array index
int getIndexfromArray(int a[], int searchValue)
{
    int i;

    for (i = 0; i < 5; i++)
    {
        if (a[i] == searchValue)
        {
            return i;
        }
    }
    return 0;
}
int main()
{
    int a[5], i, searchValue, flag;

    for (i = 0; i < 5; i++)
    {
        printf("Enter value A[%d] : ", i);
        scanf("%d", &a[i]);
    }
    printf("Enter the value you want to search : ");
    scanf("%d", &searchValue);

    flag = getIndexfromArray(a, searchValue);

    if (flag == -1)
    {
        printf("\nNot Found in Array...");
    }
    else
    {
        printf("%d is found at A[%d]..", searchValue, flag);
    }
    return 0;
}