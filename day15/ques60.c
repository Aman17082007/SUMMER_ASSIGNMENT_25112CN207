// program to move zeroes to end
#include <stdio.h>

int main()
{
    int n, i, j = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Move non-zero elements to the front
    for (i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[j] = arr[i];
            j++;
        }
    }

    // Fill remaining positions with zero
    while (j < n)
    {
        arr[j] = 0;
        j++;
    }

    printf("Array after moving zeroes to the end:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}