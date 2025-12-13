#include<stdio.h>
int main()
{
    int arr[30] = {5, 12, 7, 20, 3, 15, 8, 1, 10, 99,
                   23, 45, 67, 89, 34, 21, 43, 54, 76, 87,
                   32, 14, 26, 38, 49, 51, 62, 73, 84, 95};

    int dupe[30];
    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                dupe[i] = arr[i];
                break;
            }
        }   
    }

    for (int i = 0; i < 30; i++)
    {
        if(dupe[i]){
            printf("Duplicate element found: %d\n", dupe[i]);
        }
    }
    return 0;
}