// program to develop complete mini project using array,strings and functions
#include <stdio.h>
#include <string.h>

#define MAX 100

struct Student
{
    int roll;
    char name[50];
    char course[50];
    float marks;
};

struct Student s[MAX];
int count = 0;

// Function declarations
void addStudent();
void displayStudents();
void searchStudent();
void updateStudent();
void deleteStudent();

int main()
{
    int choice;

    while (1)
    {
        printf("\n===== Student Management System =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addStudent();
            break;

        case 2:
            displayStudents();
            break;

        case 3:
            searchStudent();
            break;

        case 4:
            updateStudent();
            break;

        case 5:
            deleteStudent();
            break;

        case 6:
            printf("Exiting program...\n");
            return 0;

        default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
}

// Function to add student
void addStudent()
{
    printf("\nEnter Roll Number: ");
    scanf("%d", &s[count].roll);

    printf("Enter Name: ");
    scanf("%s", s[count].name);

    printf("Enter Course: ");
    scanf("%s", s[count].course);

    printf("Enter Marks: ");
    scanf("%f", &s[count].marks);

    count++;

    printf("Student added successfully.\n");
}

// Function to display students
void displayStudents()
{
    int i;

    if (count == 0)
    {
        printf("No records available.\n");
        return;
    }

    printf("\nRoll\tName\tCourse\tMarks\n");

    for (i = 0; i < count; i++)
    {
        printf("%d\t%s\t%s\t%.2f\n",
               s[i].roll,
               s[i].name,
               s[i].course,
               s[i].marks);
    }
}

// Function to search student
void searchStudent()
{
    int roll, i, found = 0;

    printf("Enter Roll Number to search: ");
    scanf("%d", &roll);

    for (i = 0; i < count; i++)
    {
        if (s[i].roll == roll)
        {
            printf("\nStudent Found\n");
            printf("Roll: %d\n", s[i].roll);
            printf("Name: %s\n", s[i].name);
            printf("Course: %s\n", s[i].course);
            printf("Marks: %.2f\n", s[i].marks);

            found = 1;
            break;
        }
    }

    if (found == 0)
        printf("Student not found.\n");
}

// Function to update student
void updateStudent()
{
    int roll, i, found = 0;

    printf("Enter Roll Number to update: ");
    scanf("%d", &roll);

    for (i = 0; i < count; i++)
    {
        if (s[i].roll == roll)
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
        printf("Student not found.\n");
}

// Function to delete student
void deleteStudent()
{
    int roll, i, j, found = 0;

    printf("Enter Roll Number to delete: ");
    scanf("%d", &roll);

    for (i = 0; i < count; i++)
    {
        if (s[i].roll == roll)
        {
            for (j = i; j < count - 1; j++)
            {
                s[j] = s[j + 1];
            }

            count--;

            printf("Record deleted successfully.\n");

            found = 1;
            break;
        }
    }

    if (found == 0)
        printf("Student not found.\n");
}