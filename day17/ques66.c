// program to union of array

#include <stdio.h>

int main()
{
    int n1, n2, i, j, found;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int arr1[n1];

    printf("Enter elements of first array: ");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int arr2[n2], unionArr[n1 + n2];
    int k = 0;

    printf("Enter elements of second array: ");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // Add unique elements from first array
    for (i = 0; i < n1; i++)
    {
        found = 0;
        for (j = 0; j < k; j++)
        {
            if (arr1[i] == unionArr[j])
            {
                found = 1;
                break;
            }
        }
        if (!found)
        {
            unionArr[k++] = arr1[i];
        }
    }

    // Add unique elements from second array
    for (i = 0; i < n2; i++)
    {
        found = 0;
        for (j = 0; j < k; j++)
        {
            if (arr2[i] == unionArr[j])
            {
                found = 1;
                break;
            }
        }
        if (!found)
        {
            unionArr[k++] = arr2[i];
        }
    }

    printf("Union of the arrays:\n");
    for (i = 0; i < k; i++)
    {
        printf("%d ", unionArr[i]);
    }

    return 0;
}