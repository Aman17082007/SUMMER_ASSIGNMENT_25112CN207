// program to check string rotation
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], temp[200];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Check length and create combined string
    if (strlen(str1) == strlen(str2))
    {
        strcpy(temp, str1);
        strcat(temp, str1);

        // Check if str2 is present in str1+str1
        if (strstr(temp, str2) != NULL)
            printf("The strings are rotations of each other.\n");
        else
            printf("The strings are not rotations of each other.\n");
    }
    else
    {
        printf("The strings are not rotations of each other.\n");
    }

    return 0;
}