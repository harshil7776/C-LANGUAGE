// #include<stdio.h>

// int main()
// {
//     int total_session,attend;
//     float pct=0;

//     printf("Enter no of session : ");
//     scanf("%d",&total_session);

//     printf("Enter no of session attended : ");
//     scanf("%d",&attend);

//     pct = (attend * 100) / total_session;

//     printf("\nYour percentage : %.2f%",pct);

//     if(pct<=74)
//     {
//         printf("\nNot eligible for exam...");
//     }else
//     {
//         printf("\nEligible for exam..");
//     }
// }

#include<stdio.h>

int main()
{
    int no_frd , total_bill , tip;
    int total_amt,tip_p;

    printf("Enter total number of friends : ");
    scanf("%d",&no_frd);

    printf("\nEnter total bill : ");
    scanf("%d",&total_bill);

    tip_p = (total_bill * tip) / 100;

    total_amt = total_bill + tip;

    printf("Total amount to be paid : %d\n",total_amt);
    printf("Amount per friend : %d\n",total_amt/no_frd);
    
}