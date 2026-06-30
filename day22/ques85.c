// program to check palindrome string
#include <stdio.h>

int main()
{
    char str[100];
    int i, length = 0, palindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find the length of the string
    while (str[length] != '\0')
    {
        length++;
    }

    // Check for palindrome
    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            palindrome = 0;
            break;
        }
    }

    if (palindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}