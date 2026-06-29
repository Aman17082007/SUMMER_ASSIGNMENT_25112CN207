// [program to linear search]
#include <stdio.h>

int main()
{
    int arr[100], n, i, key, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    // Input array elements
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    // Linear search
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            found = 1;
            break;
        }
    }

    if (found)
        printf("%d found at position %d\n", key, i + 1);
    else
        printf("%d not found in the array\n", key);

    return 0;
}