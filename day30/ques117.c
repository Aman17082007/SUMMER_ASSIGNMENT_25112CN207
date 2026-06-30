// program to create student record system using arrays and string functions
#include <stdio.h>
#include <string.h>

struct Student
{
    int roll;
    char name[50];
    char course[50];
    float marks;
};

int main()
{
    struct Student s[100];
    int choice, n = 0, i, rollNo, found;

    while (1)
    {
        printf("\n--- Student Record System ---\n");
        printf("1. Add Student Record\n");
        printf("2. Display Student Records\n");
        printf("3. Search Student Record\n");
        printf("4. Update Student Record\n");
        printf("5. Delete Student Record\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Roll Number: ");
            scanf("%d", &s[n].roll);

            printf("Enter Student Name: ");
            scanf("%s", s[n].name);

            printf("Enter Course Name: ");
            scanf("%s", s[n].course);

            printf("Enter Marks: ");
            scanf("%f", &s[n].marks);

            n++;
            printf("Record added successfully.\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("No records available.\n");
            }
            else
            {
                printf("\nRoll\tName\tCourse\tMarks\n");
                for (i = 0; i < n; i++)
                {
                    printf("%d\t%s\t%s\t%.2f\n",
                           s[i].roll,
                           s[i].name,
                           s[i].course,
                           s[i].marks);
                }
            }
            break;

        case 3:
            printf("Enter Roll Number to search: ");
            scanf("%d", &rollNo);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (s[i].roll == rollNo)
                {
                    printf("\nStudent Found:\n");
                    printf("Roll Number: %d\n", s[i].roll);
                    printf("Name: %s\n", s[i].name);
                    printf("Course: %s\n", s[i].course);
                    printf("Marks: %.2f\n", s[i].marks);
                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("Record not found.\n");

            break;

        case 4:
            printf("Enter Roll Number to update: ");
            scanf("%d", &rollNo);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (s[i].roll == rollNo)
                {
                    printf("Enter New Name: ");
                    scanf("%s", s[i].name);

                    printf("Enter New Course: ");
                    scanf("%s", s[i].course);

                    printf("Enter New Marks: ");
                    scanf("%f", &s[i].marks);

                    printf("Record updated successfully.\n");
                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("Record not found.\n");

            break;

        case 5:
            printf("Enter Roll Number to delete: ");
            scanf("%d", &rollNo);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (s[i].roll == rollNo)
                {
                    for (int j = i; j < n - 1; j++)
                    {
                        s[j] = s[j + 1];
                    }

                    n--;
                    printf("Record deleted successfully.\n");
                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("Record not found.\n");

            break;

        case 6:
            printf("Exiting Student Record System...\n");
            return 0;

        default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
}