// program to find common character in two strings
#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int freq[256] = {0};
    int i;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Store characters of first string
    for (i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] != '\n')
            freq[(unsigned char)str1[i]] = 1;
    }

    printf("Common characters: ");

    // Check characters of second string
    for (i = 0; str2[i] != '\0'; i++)
    {
        if (str2[i] != '\n' && freq[(unsigned char)str2[i]] == 1)
        {
            printf("%c ", str2[i]);
            freq[(unsigned char)str2[i]] = 0; // Avoid printing duplicates
        }
    }

    return 0;
}