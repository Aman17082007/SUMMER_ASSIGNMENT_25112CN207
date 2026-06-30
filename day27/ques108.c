// program to create marksheet generation system
#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks[5];
    float total;
    float percentage;
};

int main()
{
    struct Student s;
    int i;

    printf("===== Marksheet Generation System =====\n");

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Student Name: ");
    scanf("%s", s.name);

    s.total = 0;

    printf("Enter marks of 5 subjects:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%f", &s.marks[i]);

        s.total += s.marks[i];
    }

    // Calculate percentage
    s.percentage = s.total / 5;

    // Display marksheet
    printf("\n========== MARKSHEET ==========\n");
    printf("Roll Number : %d\n", s.roll);
    printf("Name        : %s\n", s.name);

    printf("\nSubject Marks:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Subject %d : %.2f\n", i + 1, s.marks[i]);
    }

    printf("\nTotal Marks : %.2f / 500\n", s.total);
    printf("Percentage  : %.2f%%\n", s.percentage);

    // Grade calculation
    if (s.percentage >= 90)
        printf("Grade       : A+\n");
    else if (s.percentage >= 80)
        printf("Grade       : A\n");
    else if (s.percentage >= 70)
        printf("Grade       : B\n");
    else if (s.percentage >= 60)
        printf("Grade       : C\n");
    else if (s.percentage >= 40)
        printf("Grade       : D\n");
    else
        printf("Grade       : Fail\n");

    return 0;
}