// program to create mini library system
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
    struct Book b[100];
    int choice, n = 0, i, bookId, found;

    while (1)
    {
        printf("\n--- Mini Library Management System ---\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Delete Book\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Book ID: ");
            scanf("%d", &b[n].id);

            printf("Enter Book Name: ");
            scanf("%s", b[n].name);

            printf("Enter Author Name: ");
            scanf("%s", b[n].author);

            b[n].available = 1;

            n++;
            printf("Book added successfully.\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("No books available.\n");
            }
            else
            {
                printf("\nID\tBook Name\tAuthor\t\tStatus\n");
                for (i = 0; i < n; i++)
                {
                    printf("%d\t%s\t\t%s\t\t",
                           b[i].id,
                           b[i].name,
                           b[i].author);

                    if (b[i].available)
                        printf("Available\n");
                    else
                        printf("Issued\n");
                }
            }
            break;

        case 3:
            printf("Enter Book ID to search: ");
            scanf("%d", &bookId);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (b[i].id == bookId)
                {
                    printf("\nBook Found:\n");
                    printf("ID: %d\n", b[i].id);
                    printf("Name: %s\n", b[i].name);
                    printf("Author: %s\n", b[i].author);
                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("Book not found.\n");

            break;

        case 4:
            printf("Enter Book ID to issue: ");
            scanf("%d", &bookId);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (b[i].id == bookId)
                {
                    if (b[i].available)
                    {
                        b[i].available = 0;
                        printf("Book issued successfully.\n");
                    }
                    else
                    {
                        printf("Book is already issued.\n");
                    }

                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("Book not found.\n");

            break;

        case 5:
            printf("Enter Book ID to return: ");
            scanf("%d", &bookId);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (b[i].id == bookId)
                {
                    b[i].available = 1;
                    printf("Book returned successfully.\n");
                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("Book not found.\n");

            break;

        case 6:
            printf("Enter Book ID to delete: ");
            scanf("%d", &bookId);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (b[i].id == bookId)
                {
                    for (int j = i; j < n - 1; j++)
                    {
                        b[j] = b[j + 1];
                    }

                    n--;
                    printf("Book deleted successfully.\n");
                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("Book not found.\n");

            break;

        case 7:
            printf("Exiting Library System...\n");
            return 0;

        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}