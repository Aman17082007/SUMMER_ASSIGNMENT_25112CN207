// program to print prime number in a range
#include <stdio.h>
int main()
{
    int start, end, a, i, j;
    printf("Enter the starting number :");
    scanf("%d", &start);
    printf("Enter the ending number :");
    scanf("%d", &end);
    for (i = start; i <= end; i++)
    {
        a = 1;

        if (i >= 2)
        {
            for (j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    a = 0;
                }
            }
            if (a == 1)
            {
                printf("%d  ", i);
            }
        }
    }
    return 0;
}