// program to create mini employees management system
#include <stdio.h>
#include <string.h>

struct Employee
{
    int id;
    char name[50];
    char department[50];
    float salary;
};

int main()
{
    struct Employee emp[100];
    int choice, n = 0, i, empId, found;

    while (1)
    {
        printf("\n--- Mini Employee Management System ---\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Employee\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Employee ID: ");
            scanf("%d", &emp[n].id);

            printf("Enter Employee Name: ");
            scanf("%s", emp[n].name);

            printf("Enter Department: ");
            scanf("%s", emp[n].department);

            printf("Enter Salary: ");
            scanf("%f", &emp[n].salary);

            n++;
            printf("Employee added successfully.\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("No employee records available.\n");
            }
            else
            {
                printf("\nID\tName\tDepartment\tSalary\n");
                for (i = 0; i < n; i++)
                {
                    printf("%d\t%s\t%s\t\t%.2f\n",
                           emp[i].id,
                           emp[i].name,
                           emp[i].department,
                           emp[i].salary);
                }
            }
            break;

        case 3:
            printf("Enter Employee ID to search: ");
            scanf("%d", &empId);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (emp[i].id == empId)
                {
                    printf("\nEmployee Found:\n");
                    printf("ID: %d\n", emp[i].id);
                    printf("Name: %s\n", emp[i].name);
                    printf("Department: %s\n", emp[i].department);
                    printf("Salary: %.2f\n", emp[i].salary);
                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("Employee not found.\n");

            break;

        case 4:
            printf("Enter Employee ID to update: ");
            scanf("%d", &empId);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (emp[i].id == empId)
                {
                    printf("Enter New Name: ");
                    scanf("%s", emp[i].name);

                    printf("Enter New Department: ");
                    scanf("%s", emp[i].department);

                    printf("Enter New Salary: ");
                    scanf("%f", &emp[i].salary);

                    printf("Employee updated successfully.\n");
                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("Employee not found.\n");

            break;

        case 5:
            printf("Enter Employee ID to delete: ");
            scanf("%d", &empId);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (emp[i].id == empId)
                {
                    for (int j = i; j < n - 1; j++)
                    {
                        emp[j] = emp[j + 1];
                    }

                    n--;
                    printf("Employee deleted successfully.\n");
                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("Employee not found.\n");

            break;

        case 6:
            printf("Exiting Employee Management System...\n");
            return 0;

        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}