// program to create student record management system
#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student students[100];
    int n, i, choice;

    printf("===== Student Record Management System =====\n");

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Add student records
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Roll number: ");
        scanf("%d", &students[i].roll);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display menu
    do
    {
        printf("\n1. Display All Records");
        printf("\n2. Search Student");
        printf("\n3. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            printf("\nStudent Records:\n");
            printf("Roll\tName\tMarks\n");

            for (i = 0; i < n; i++)
            {
                printf("%d\t%s\t%.2f\n",
                       students[i].roll,
                       students[i].name,
                       students[i].marks);
            }
            break;

        case 2:
        {
            int roll, found = 0;

            printf("Enter roll number to search: ");
            scanf("%d", &roll);

            for (i = 0; i < n; i++)
            {
                if (students[i].roll == roll)
                {
                    printf("\nRecord Found:\n");
                    printf("Roll: %d\n", students[i].roll);
                    printf("Name: %s\n", students[i].name);
                    printf("Marks: %.2f\n", students[i].marks);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Student record not found.\n");

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