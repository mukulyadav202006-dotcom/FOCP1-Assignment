#include <stdio.h>
int main()
    {
        int n = 100, pos, i, choice;
        int arr[100] = {5, 12, 7, 20, 3, 15, 8, 1, 10, 99,
                        23, 45, 67, 89, 34, 21, 43, 54, 76, 87,
                        32, 14, 26, 38, 49, 51, 62, 73, 84, 95};

        printf("\nOriginal array:\n");
        for (i = 0; i < n; i++)
            printf("%d ", arr[i]);

        printf("\n\nChoose deletion position:\n");
        printf("1. Front\n2. Middle\n3. End\nEnter choice: ");
        scanf("%d", &choice);

        if (choice == 1)
            pos = 0;
        else if (choice == 2)
            pos = n / 2;
        else if (choice == 3)
            pos = n - 1;
        else
        {
            printf("Invalid choice");
            return 0;
        }

        for (i = pos; i < n - 1; i++)
            arr[i] = arr[i + 1];
        n--;
        printf("\nArray after deletion:\n");
        for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
        printf("\n");
        
        return 0;
    }