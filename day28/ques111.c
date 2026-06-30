// program to create ticket booking system
#include <stdio.h>

struct Ticket
{
    int ticketNo;
    char name[50];
    int age;
    int seatNo;
};

int main()
{
    struct Ticket t[100];
    int n, i, choice, ticketSearch, found;

    printf("===== Ticket Booking System =====\n");

    printf("Enter number of tickets to book: ");
    scanf("%d", &n);

    // Book tickets
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details for ticket %d\n", i + 1);

        printf("Ticket Number: ");
        scanf("%d", &t[i].ticketNo);

        printf("Passenger Name: ");
        scanf("%s", t[i].name);

        printf("Passenger Age: ");
        scanf("%d", &t[i].age);

        printf("Seat Number: ");
        scanf("%d", &t[i].seatNo);
    }

    do
    {
        printf("\n1. Display All Tickets");
        printf("\n2. Search Ticket");
        printf("\n3. Cancel Ticket");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            printf("\nTicket Details:\n");
            printf("Ticket No\tName\tAge\tSeat No\n");

            for (i = 0; i < n; i++)
            {
                printf("%d\t\t%s\t%d\t%d\n",
                       t[i].ticketNo,
                       t[i].name,
                       t[i].age,
                       t[i].seatNo);
            }
            break;

        case 2:
            found = 0;

            printf("Enter ticket number to search: ");
            scanf("%d", &ticketSearch);

            for (i = 0; i < n; i++)
            {
                if (t[i].ticketNo == ticketSearch)
                {
                    printf("\nTicket Found:\n");
                    printf("Ticket No: %d\n", t[i].ticketNo);
                    printf("Name: %s\n", t[i].name);
                    printf("Age: %d\n", t[i].age);
                    printf("Seat No: %d\n", t[i].seatNo);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Ticket not found.\n");

            break;

        case 3:
            printf("Enter ticket number to cancel: ");
            scanf("%d", &ticketSearch);

            for (i = 0; i < n; i++)
            {
                if (t[i].ticketNo == ticketSearch)
                {
                    printf("Ticket cancelled successfully.\n");

                    // Shift remaining records
                    for (; i < n - 1; i++)
                    {
                        t[i] = t[i + 1];
                    }
                    n--;
                    break;
                }
            }
            break;

        case 4:
            printf("Thank you for using Ticket Booking System.\n");
            break;

        default:
            printf("Invalid choice.\n");
        }

    } while (choice != 4);

    return 0;
}