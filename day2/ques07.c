// products of digits
#include <stdio.h>
int main()
{
    int num, product = 1, rem;
    printf("Enter the number : ");
    scanf("%d", &num);
    if (num == 0)
        product = 0;
    if (rem == 0)
    {
        product = 0;
    }
    else
    {
        while (num != 0)
        {
            rem = num % 10;
            product = product * rem;
            num = num / 10;
        }
    }
    printf("product of number is %d", product);
    return 0;
}