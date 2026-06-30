// program to create ATM simulation
#include <stdio.h>

int main()
{
    int choice;
    float balance = 10000.0, amount;

    printf("===== Welcome to ATM =====\n");

    do
    {
        printf("\n1. Check Balance");
        printf("\n2. Deposit Money");
        printf("\n3. Withdraw Money");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            printf("Your current balance is: %.2f\n", balance);
            break;

        case 2:
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);

            if (amount > 0)
            {
                balance += amount;
                printf("Deposit successful.\n");
                printf("Updated balance: %.2f\n", balance);
            }
            else
            {
                printf("Invalid amount.\n");
            }
            break;

        case 3:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);

            if (amount > balance)
            {
                printf("Insufficient balance.\n");
            }
            else if (amount <= 0)
            {
                printf("Invalid amount.\n");
            }
            else
            {
                balance -= amount;
                printf("Withdrawal successful.\n");
                printf("Remaining balance: %.2f\n", balance);
            }
            break;

        case 4:
            printf("Thank you for using ATM.\n");
            break;

        default:
            printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}