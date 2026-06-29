// program to intersections of array
#include <stdio.h>

int main()
{
    int n1, n2, i, j, k = 0, found;

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

    int arr2[n2], intersection[n1];

    printf("Enter elements of second array: ");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // Find intersection
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                found = 0;

                // Avoid duplicate elements
                for (int x = 0; x < k; x++)
                {
                    if (intersection[x] == arr1[i])
                    {
                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                {
                    intersection[k++] = arr1[i];
                }
                break;
            }
        }
    }

    printf("Intersection of the arrays:\n");
    for (i = 0; i < k; i++)
    {
        printf("%d ", intersection[i]);
    }

    return 0;
}