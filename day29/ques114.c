// program to create menu driven array operation system
#include <stdio.h>

int main()
{
    int arr[100], n, choice, i, value, pos, found;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements of array:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    while (1)
    {
        printf("\n--- Menu Driven Array Operation System ---\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Search Element\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Array elements are:\n");
            for (i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;

        case 2:
            if (n >= 100)
            {
                printf("Array is full!\n");
            }
            else
            {
                printf("Enter element to insert: ");
                scanf("%d", &value);

                printf("Enter position (0 to %d): ", n);
                scanf("%d", &pos);

                if (pos >= 0 && pos <= n)
                {
                    for (i = n; i > pos; i--)
                    {
                        arr[i] = arr[i - 1];
                    }
                    arr[pos] = value;
                    n++;
                    printf("Element inserted successfully.\n");
                }
                else
                {
                    printf("Invalid position.\n");
                }
            }
            break;

        case 3:
            printf("Enter position to delete (0 to %d): ", n - 1);
            scanf("%d", &pos);

            if (pos >= 0 && pos < n)
            {
                for (i = pos; i < n - 1; i++)
                {
                    arr[i] = arr[i + 1];
                }
                n--;
                printf("Element deleted successfully.\n");
            }
            else
            {
                printf("Invalid position.\n");
            }
            break;

        case 4:
            printf("Enter element to search: ");
            scanf("%d", &value);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (arr[i] == value)
                {
                    printf("Element found at position %d\n", i);
                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                printf("Element not found.\n");
            }
            break;

        case 5:
            printf("Exiting program...\n");
            return 0;

        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}