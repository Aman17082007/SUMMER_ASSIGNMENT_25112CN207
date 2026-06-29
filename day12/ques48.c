// program to write function for perfect number
#include <stdio.h>

// Function to check perfect number
int perfectNumber(int n)
{
    int i, sum = 0;

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum = sum + i;
    }

    if (sum == n)
        return 1;
    else
        return 0;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (perfectNumber(num))
        printf("%d is a Perfect Number.\n", num);
    else
        printf("%d is not a Perfect Number.\n", num);

    return 0;
}