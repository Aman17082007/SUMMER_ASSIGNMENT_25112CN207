<<<<<<< HEAD
#include <stdio.h>

int main() {
    int start, end, num, temp, digit, sum;

    printf("Enter starting range: ");
    scanf("%d", &start);

    printf("Enter ending range: ");
    scanf("%d", &end);

    printf("Armstrong numbers are:\n");

    for(num = start; num <= end; num++) {
        temp = num;
        sum = 0;

        while(temp != 0) {
            digit = temp % 10;
            sum = sum + (digit * digit * digit);
            temp = temp / 10;
        }

        if(sum == num)
=======
// program to print armstrong number in a range
#include <stdio.h>
#include <math.h>

int main()
{
    int start, end, num, temp, digit, sum, digits;

    printf("Enter range (start end): ");
    scanf("%d %d", &start, &end);

    for (num = start; num <= end; num++)
    {
        temp = num;
        digits = 0;

        while (temp > 0)
        {
            digits++;
            temp /= 10;
        }

        temp = num;
        sum = 0;

        while (temp > 0)
        {
            digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }

        if (sum == num)
>>>>>>> adf6740 (DAY-6 uploaded.)
            printf("%d ", num);
    }

    return 0;
<<<<<<< HEAD
}
=======
}
>>>>>>> adf6740 (DAY-6 uploaded.)
