<<<<<<< HEAD
#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for(int i = 1; i <= n; i++) {
        printf("%d ", first);

        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}CTRL+O


=======
// program to generate fibonacci series
#include <stdio.h>
int main()
{
    int n, x = 0, y = 1, z;
    printf("enter the numbers :");
    scanf("\n%d", &n);
    printf("%d %d ", x, y);
    for (int i = 3; i <= n; i++)
    {

        z = x + y;
        x = y;
        y = z;
        printf("%d ", z);
    }

    return 0;
}
>>>>>>> adf6740 (DAY-6 uploaded.)
