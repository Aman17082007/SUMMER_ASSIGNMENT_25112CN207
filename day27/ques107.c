// program to create salary management system
#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float basicSalary;
    float allowance;
    float deduction;
    float netSalary;
};

int main()
{
    struct Employee emp[100];
    int n, i;

    printf("===== Salary Management System =====\n");

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Input employee details
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Employee Name: ");
        scanf("%s", emp[i].name);

        printf("Basic Salary: ");
        scanf("%f", &emp[i].basicSalary);

        printf("Allowance: ");
        scanf("%f", &emp[i].allowance);

        printf("Deduction: ");
        scanf("%f", &emp[i].deduction);

        // Calculate net salary
        emp[i].netSalary = emp[i].basicSalary + emp[i].allowance - emp[i].deduction;
    }

    // Display salary details
    printf("\n===== Employee Salary Details =====\n");
    printf("ID\tName\tBasic\tAllowance\tDeduction\tNet Salary\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\t%s\t%.2f\t%.2f\t\t%.2f\t\t%.2f\n",
               emp[i].id,
               emp[i].name,
               emp[i].basicSalary,
               emp[i].allowance,
               emp[i].deduction,
               emp[i].netSalary);
    }

    return 0;
}