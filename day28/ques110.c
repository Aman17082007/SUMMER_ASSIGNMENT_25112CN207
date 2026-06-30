// program to create bank account system
#include <stdio.h>

struct Account
{
    int accountNo;
    char name[50];
    float balance;
};

int main()
{
    struct Account acc;
    int choice;
    float amount;

    printf("===== Bank Account Management System =====\n");

    // Create account
    printf("Enter account number: ");
    scanf("%d", &acc.accountNo);

    printf("Enter account holder name: ");
    scanf("%s", acc.name);

    printf("Enter initial balance: ");
    scanf("%f", &acc.balance);

    do
    {
        printf("\n1. Display Account Details");
        printf("\n2. Deposit Money");
        printf("\n3. Withdraw Money");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            printf("\nAccount Details:\n");
            printf("Account Number: %d\n", acc.accountNo);
            printf("Account Holder: %s\n", acc.name);
            printf("Balance: %.2f\n", acc.balance);
            break;

        case 2:
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);

            if (amount > 0)
            {
                acc.balance += amount;
                printf("Deposit successful.\n");
                printf("Updated balance: %.2f\n", acc.balance);
            }
            else
            {
                printf("Invalid amount.\n");
            }
            break;

        case 3:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);

            if (amount > acc.balance)
            {
                printf("Insufficient balance.\n");
            }
            else if (amount <= 0)
            {
                printf("Invalid amount.\n");
            }
            else
            {
                acc.balance -= amount;
                printf("Withdrawal successful.\n");
                printf("Remaining balance: %.2f\n", acc.balance);
            }
            break;

        case 4:
            printf("Thank you for using Bank System.\n");
            break;

        default:
            printf("Invalid choice.\n");
        }

    } while (choice != 4);

    return 0;
}
