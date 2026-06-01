// PROGRAM TO COUNT DIGITS IN A NUMBER
#include <stdio.h>
int main()
{
    int num, count = 0;
    printf("Enter the number :");
    scanf("%d", &num);

    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    printf("digits in the number is %d\n", count);
    return 0;
}