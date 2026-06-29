// program to selection sort
#include <stdio.h>

int main()
{
    int n, i, j, min, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Selection Sort
    for (i = 0; i < n - 1; i++)
    {
        min = i;

        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        // Swap minimum element with first element
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    printf("Array after Selection Sort:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
