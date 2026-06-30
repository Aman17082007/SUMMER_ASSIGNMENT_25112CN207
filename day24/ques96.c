// program to remove duplicate characters from a string
#include <stdio.h>

int main()
{
    char str[100], result[100];
    int i, j = 0, k, found;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove duplicate characters
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '\n')
            continue;

        found = 0;

        for (k = 0; k < j; k++)
        {
            if (result[k] == str[i])
            {
                found = 1;
                break;
            }
        }

        if (!found)
        {
            result[j] = str[i];
            j++;
        }
    }

    result[j] = '\0';

    printf("String after removing duplicates: %s\n", result);

    return 0;
}