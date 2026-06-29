// program to write function for fibonacci
#include <stdio.h>

// Function to print Fibonacci series
void fibonacci(int n)
{
    int first = 0, second = 1, next, i;

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; i++)
    {
        printf("%d ", first);

        next = first + second;
        first = second;
        second = next;
    }
}

int main()
{
    int terms;

    printf("Enter number of terms: ");
    scanf("%d", &terms);

    fibonacci(terms);

    return 0;
}