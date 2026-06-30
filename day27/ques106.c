// program to create employee record management system
#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee emp[100];
    int n, i, choice;

    printf("===== Employee Record Management System =====\n");

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Add employee records
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Employee Name: ");
        scanf("%s", emp[i].name);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    do
    {
        printf("\n1. Display All Employees");
        printf("\n2. Search Employee");
        printf("\n3. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            printf("\nEmployee Records:\n");
            printf("ID\tName\tSalary\n");

            for (i = 0; i < n; i++)
            {
                printf("%d\t%s\t%.2f\n",
                       emp[i].id,
                       emp[i].name,
                       emp[i].salary);
            }
            break;

        case 2:
        {
            int id, found = 0;

            printf("Enter employee ID to search: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++)
            {
                if (emp[i].id == id)
                {
                    printf("\nEmployee Found:\n");
                    printf("ID: %d\n", emp[i].id);
                    printf("Name: %s\n", emp[i].name);
                    printf("Salary: %.2f\n", emp[i].salary);
                    found = 1;
                    break;
                }
            }

            if (!found)
            {
                printf("Employee record not found.\n");
            }

            break;
        }

        case 3:
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid choice.\n");
        }

    } while (choice != 3);

    return 0;
}