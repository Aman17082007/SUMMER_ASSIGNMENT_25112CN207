// check whether a number is prime or not
#include <stdio.h>
int main()
{
    int num, a = 0;
    printf("Enter the number :");
    scanf("%d", &num);

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            a = 1;
            break;
        }
    }
    if (num == 1)
    {
        printf("1 is neither prime nor composite");
    }
    else if (a == 1)
    {
        printf("number is not prime ");
    }
    else
    {
        printf("number is prime");
    }

    return 0;
}