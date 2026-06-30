// program to create library management system
#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char name[50];
    char author[50];
    int available;
};

int main()
{
    struct Book books[100];
    int n, choice, i, id, found;

    printf("===== Library Management System =====\n");

    printf("Enter number of books: ");
    scanf("%d", &n);

    // Add book details
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of book %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &books[i].id);

        printf("Book Name: ");
        scanf("%s", books[i].name);

        printf("Author Name: ");
        scanf("%s", books[i].author);

        books[i].available = 1; // 1 means available
    }

    do
    {
        printf("\n1. Display Books");
        printf("\n2. Search Book");
        printf("\n3. Issue Book");
        printf("\n4. Return Book");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            printf("\nBook Details:\n");
            printf("ID\tName\tAuthor\tStatus\n");

            for (i = 0; i < n; i++)
            {
                printf("%d\t%s\t%s\t",
                       books[i].id,
                       books[i].name,
                       books[i].author);

                if (books[i].available)
                    printf("Available\n");
                else
                    printf("Issued\n");
            }
            break;

        case 2:
            found = 0;
            printf("Enter book ID to search: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++)
            {
                if (books[i].id == id)
                {
                    printf("\nBook Found:\n");
                    printf("ID: %d\n", books[i].id);
                    printf("Name: %s\n", books[i].name);
                    printf("Author: %s\n", books[i].author);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Book not found.\n");

            break;

        case 3:
            printf("Enter book ID to issue: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++)
            {
                if (books[i].id == id)
                {
                    if (books[i].available)
                    {
                        books[i].available = 0;
                        printf("Book issued successfully.\n");
                    }
                    else
                    {
                        printf("Book is already issued.\n");
                    }
                    break;
                }
            }
            break;

        case 4:
            printf("Enter book ID to return: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++)
            {
                if (books[i].id == id)
                {
                    books[i].available = 1;
                    printf("Book returned successfully.\n");
                    break;
                }
            }
            break;

        case 5:
            printf("Exiting Library System...\n");
            break;

        default:
            printf("Invalid choice.\n");
        }

    } while (choice != 5);

    return 0;
}