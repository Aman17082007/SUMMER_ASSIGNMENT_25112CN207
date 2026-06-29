//  program to write function for armstrong
#include <stdio.h>

// Function to check Armstrong number
int armstrong(int n)
{
    int original, remainder, sum = 0;

    original = n;

    while (n != 0)
    {
        remainder = n % 10;
        sum = sum + (remainder * remainder * remainder);
        n = n / 10;
    }

    if (original == sum)
        return 1;
    else
        return 0;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (armstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}