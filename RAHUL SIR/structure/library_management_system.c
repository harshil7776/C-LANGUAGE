#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define s 100
struct Book
{
    int id;
    char title[50];
    char author[50];
    int quantity;
    float price;
    int active; // 1 = active (available), 0 = logically deleted
};

int login()
{
    char username[50];
    char password[50];
    int attempt = 0;

    while (attempt < 3)
    {
        printf("\nEnter user Name : ");
        gets(username);

        printf("\nEnter password : ");
        gets(password);

        if ((strcmp(username, "harshil") == 0) && (strcmp(password, "123") == 0))
        {
            return 1;
        }
        else
        {
            attempt++;
            printf("\n%d is remaining attempt...", 3 - attempt);
        }
    }
    if (attempt == 3)
    {
        printf("\n\n%d time wrong credencials given,\n\tLogin Failed...", attempt);
        return 0;
    }
}

void add_book()
{
    struct Book b;
    
    printf("\nEnter Book Serial id : ");
    scanf("%d",b.id);

    b.active=1;

    printf("\nEnter Book Name : ");
    scanf("%s",b.)
    
}


int main()
{
    int choice = 0;
    if (login())
    {
        do
        {
            printf("\n1) Add Book");
            printf("\n2) Display All Books");
            printf("\n3) Search Book");
            printf("\n4) Issue Book");
            printf("\n5) Return Book");
            printf("\n6) Delete Book");
            printf("\n7) Exit");

            printf("\nEnter Your choice : ");
            scanf("%d", &choice);

            switch (choice)
            {
            case 1:
                add_book();
                break;
            case 2:
                display_book();
                break;
            case 3:
                search_book();
                break;
            case 4:
                issue_bbok();
                break;
            case 5:
                return_bbok();
                break;
            case 6:
                delete_book();
                break;
            case 7:
                printf("\nExiting the application...");
                exit(0);
            default:
                printf("\nInvalid choice. please try againg...");
            }

        } while (choice != 7);
    }
}
