// sum of digits of a number
#include <stdio.h>
int main()
{
    int sum = 0, num, rem;
    printf("\nenter the number : ");
    scanf("%d", &num);
    while (num != 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    printf("\nsum of digits = %d", sum);
    return 0;
}