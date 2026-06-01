// PROGRAM TO CALCULATE SUM OF FIRST N NATURAL NUMBER

#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter the number :");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("THE SUM OF FIRST %d NATURAL NUMBER IS %d\n", n, sum);
    return 0;
}