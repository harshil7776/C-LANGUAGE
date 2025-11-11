#include <stdio.h>
#include <stdlib.h>

int main()
{
    int player, computer;

    while (1)
    {
        printf("\nRock paper scissors...");
        printf("\n1.Rock");
        printf("\n2.Paper");
        printf("\n3.Scissors");
        printf("\n4.Exit");
        printf("Enter your choice : ");
        scanf("%d", &player);

        if (player == 4)
        {
            printf("\nThanks for playing! GoodBye!");
            break;
        }
        if (player < 1 || player > 4)
        {
            printf("\nInvalid choice! Try Again...");
            continue;
        }

        computer = (rand() % 3) + 1;

        char *choice[] = {" ", "Rock", "Paper", "Scissors"};

        printf("You choose : %s\n", choice[player]);
        printf("Computer choose : %s\n", choice[computer]);

        switch (player)
        {
        case 1:
            if (computer == 1)
            {
                printf("Its a Draw!\n");
            }
            else if (computer == 2)
            {
                printf("Computer Wins! Paper cover Rock.\n");
            }
            else
            {
                printf("You Win! Rock breaks scissors.\n");
            }
            break;

        case 2:
            if (computer == 2)
            {
                printf("Its a Draw!\n");
            }
            else if (computer == 3)
            {
                printf("Computer Wins! Scissors cut paper.\n");
            }
            else
            {
                printf("You wins! Paper covers Rock.\n");
            }
            break;

        case 3:
            if (computer == 3)
            {
                printf("Its a Draw!\n ");
            }
            else if (computer == 1)
            {
                printf("Computer Wins! Rock breaks Scissors.\n");
            }
            else
            {
                printf("You win! Scissors cut paper.\n");
            }
            break;
        }
    }
    return 0;
}