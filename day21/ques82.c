// program to reverse a string
#include <stdio.h>

int main()
{
    char str[100], temp;
    int i, length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find the length of the string
    while (str[length] != '\0')
    {
        length++;
    }

    // Reverse the string
    for (i = 0; i < length / 2; i++)
    {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    printf("Reversed string = %s\n", str);

    return 0;
}