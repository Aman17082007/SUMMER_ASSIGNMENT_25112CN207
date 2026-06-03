// program to find gcd of a two number
#include <stdio.h>

int main()
{
    int a, b, x, y, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    // Find GCD
    while (y != 0)
    {
        int temp = y;
        y = x % y;
        x = temp;
    }

    gcd = x;
    lcm = (a * b) / gcd; // product of number = gcd * lcm

    printf("LCM = %d\n", lcm);

    return 0;
}