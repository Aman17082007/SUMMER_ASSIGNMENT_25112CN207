<<<<<<< HEAD
#include <stdio.h>

int main() {
    int num, originalNum, remainder, result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while(num != 0) {
        remainder = num % 10;
        result = result + (remainder * remainder * remainder);
        num = num / 10;
    }

    if(result == originalNum)
        printf("%d is an Armstrong number", originalNum);
    else
        printf("%d is not an Armstrong number", originalNum);

    return 0;
}
=======
// program r\to check armstrong number
#include <stdio.h>
#include <math.h>
int main()
{
    int n, rem, x, sum = 0, count = 0;
    printf("enter the value :");
    scanf("%d", &n);
    x = n;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    n = x;
    while (n > 0)
    {
        rem = n % 10;
        sum = sum + pow(rem, count);
        n = n / 10;
    }
    if (sum == x)
        printf("the number is armstrong");
    else
        printf("not armstrong");

    return 0;
}
>>>>>>> adf6740 (DAY-6 uploaded.)
