// program to rotate array right
#include <stdio.h>

int main()
{
    int n, d, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], temp[n];

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate right: ");
    scanf("%d", &d);

    d = d % n;

    // Copy last d elements to the beginning
    for (i = 0; i < d; i++)
    {
        temp[i] = arr[n - d + i];
    }

    // Copy remaining elements
    for (i = 0; i < n - d; i++)
    {
        temp[d + i] = arr[i];
    }

    // Copy back to original array
    for (i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }

    printf("Array after right rotation:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}