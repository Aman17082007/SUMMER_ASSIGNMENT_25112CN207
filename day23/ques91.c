// program to check anagram strings
#include <stdio.h>
#include <ctype.h>

int main()
{
    char str1[100], str2[100];
    int freq1[256] = {0}, freq2[256] = {0};
    int i, isAnagram = 1;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Count frequency of characters in first string
    for (i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] != '\n')
            freq1[(unsigned char)tolower(str1[i])]++;
    }

    // Count frequency of characters in second string
    for (i = 0; str2[i] != '\0'; i++)
    {
        if (str2[i] != '\n')
            freq2[(unsigned char)tolower(str2[i])]++;
    }

    // Compare frequencies
    for (i = 0; i < 256; i++)
    {
        if (freq1[i] != freq2[i])
        {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram)
        printf("The strings are anagrams.\n");
    else
        printf("The strings are not anagrams.\n");

    return 0;
}