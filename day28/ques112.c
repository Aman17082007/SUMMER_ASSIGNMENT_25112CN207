// program to create contact management system
#include <stdio.h>
#include <string.h>

struct Contact
{
    char name[50];
    char phone[15];
    char email[50];
};

int main()
{
    struct Contact contacts[100];
    int n = 0, choice, i, found;
    char searchName[50];

    printf("===== Contact Management System =====\n");

    do
    {
        printf("\n1. Add Contact");
        printf("\n2. Display Contacts");
        printf("\n3. Search Contact");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            printf("\nEnter Name: ");
            scanf("%s", contacts[n].name);

            printf("Enter Phone Number: ");
            scanf("%s", contacts[n].phone);

            printf("Enter Email: ");
            scanf("%s", contacts[n].email);

            n++;

            printf("Contact added successfully.\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("No contacts available.\n");
            }
            else
            {
                printf("\nContact List:\n");
                printf("Name\tPhone\tEmail\n");

                for (i = 0; i < n; i++)
                {
                    printf("%s\t%s\t%s\n",
                           contacts[i].name,
                           contacts[i].phone,
                           contacts[i].email);
                }
            }
            break;

        case 3:
            found = 0;

            printf("Enter name to search: ");
            scanf("%s", searchName);

            for (i = 0; i < n; i++)
            {
                if (strcmp(contacts[i].name, searchName) == 0)
                {
                    printf("\nContact Found:\n");
                    printf("Name: %s\n", contacts[i].name);
                    printf("Phone: %s\n", contacts[i].phone);
                    printf("Email: %s\n", contacts[i].email);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Contact not found.\n");

            break;

        case 4:
            printf("Exiting Contact Management System...\n");
            break;

        default:
            printf("Invalid choice.\n");
        }

    } while (choice != 4);

    return 0;
}
