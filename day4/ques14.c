<<<<<<< HEAD
#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    printf("Enter value of n: ");
    scanf("%d", &n);

    if(n == 1) {
        printf("Nth Fibonacci term = %d", first);
    }
    else if(n == 2) {
        printf("Nth Fibonacci term = %d", second);
    }
    else {
        for(int i = 3; i <= n; i++) {
            next = first + second;
            first = second;
            second = next;
        }

        printf("Nth Fibonacci term = %d", second);
    }

    return 0;
}


=======
// program to find nth fibonacci term
#include <stdio.h>

int main()
{
    int n, a = 0, b = 1, c;

    printf("enter the value of n :");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }

    if (n == 0)
        printf("%d", a);
    else
        printf("%d", b);

    return 0;
}
>>>>>>> adf6740 (DAY-6 uploaded.)
