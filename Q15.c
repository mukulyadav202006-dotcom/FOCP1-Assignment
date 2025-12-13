#include<stdio.h>
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int temp1 = arr[4], temp2;
    for (int i = 0; i < 5; i++)
    {
        temp2 = arr[i];
        arr[i] = temp1;
        temp1 = temp2;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d: %d\n", i, arr[i]);
    }
    
    return 0;
}