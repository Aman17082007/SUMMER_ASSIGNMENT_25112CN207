// program to create menu-driven string operation system
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], result[200];
    int choice, length;

    printf("Enter first string: ");
    gets(str1);

    while (1)
    {
        printf("\n--- Menu Driven String Operation System ---\n");
        printf("1. Find String Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse String\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice)
        {
        case 1:
            length = strlen(str1);
            printf("Length of string = %d\n", length);
            break;

        case 2:
            strcpy(result, str1);
            printf("Copied string = %s\n", result);
            break;

        case 3:
            printf("Enter second string: ");
            gets(str2);

            strcpy(result, str1);
            strcat(result, str2);

            printf("Concatenated string = %s\n", result);
            break;

        case 4:
            printf("Enter second string: ");
            gets(str2);

            if (strcmp(str1, str2) == 0)
                printf("Strings are equal.\n");
            else
                printf("Strings are not equal.\n");
            break;

        case 5:
            strcpy(result, str1);
            strrev(result);
            printf("Reversed string = %s\n", result);
            break;

        case 6:
            printf("Exiting program...\n");
            return 0;

        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}