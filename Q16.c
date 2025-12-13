#include<stdio.h>
int main()
{
    int arr[30] = {5, 12, 7, 20, 3, 15, 8, 1, 10, 99,
                   23, 45, 67, 89, 34, 21, 43, 54, 76, 87,
                   32, 14, 26, 38, 49, 51, 62, 73, 84, 95};

    int element;
    printf("Enter the element to be inserted at the beginning: ");
    scanf("%d", &element);

    for(int i = 29; i >= 0; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[0] = element;

    arr[sizeof(arr)/sizeof(arr[0]) - 1] = element;

    for (int i = 30; i > 15; i--)
    {
        arr[i] = arr[i-1];
    }
    
    arr[15] = element;



    for (int i = 0; i < (sizeof(arr)/sizeof(arr[0])); i++)
    {
        printf("%d: %d\n", i, arr[i]);
    }
    return 0;
}