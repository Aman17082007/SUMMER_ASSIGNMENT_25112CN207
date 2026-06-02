// program for reverse of a number
#include <stdio.h>
int main()
{
    int num, rev = 0, rem;
    printf("Enter the number : ");
    scanf("%d", &num);
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    printf("reverse of number is %d", rev);
    return 0;
}