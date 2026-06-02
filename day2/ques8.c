// check whether the number is palindrome or not
#include <stdio.h>
int main()
{
    int num, rev = 0, num1, rem;
    printf("Enter the number : ");
    scanf("%d", &num);
    num1 = num;
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    if (rev == num1)
        printf("number is palindrome");
    else
    {
        printf("number is not palindrome ");
    }
    return 0;
}