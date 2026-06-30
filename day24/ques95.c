// program to find a longest word in a string
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], word[100], longest[100];
    int i = 0, j = 0, max = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1)
    {
        // Extract words
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\0')
        {
            word[j++] = str[i];
        }
        else
        {
            if (j > 0)
            {
                word[j] = '\0';

                // Check word length
                if (j > max)
                {
                    max = j;
                    strcpy(longest, word);
                }

                j = 0;
            }
        }

        if (str[i] == '\0')
            break;

        i++;
    }

    printf("Longest word = %s\n", longest);
    printf("Length = %d\n", max);

    return 0;
}