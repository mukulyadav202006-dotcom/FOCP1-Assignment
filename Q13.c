#include<stdio.h>
int main()
{
    int arr[30] = {5, 12, 7, 20, 3, 15, 8, 1, 10, 99,
                   23, 45, 67, 89, 34, 21, 43, 54, 76, 87,
                   32, 14, 26, 38, 49, 51, 62, 73, 84, 95};
    
    int peak;
    for (int i = 0; i < 30; i++)
    {
        if(i == 0){
            if(arr[i] > arr[i+1]){
                peak = arr[i];
                printf("Peak element is %d at index %d\n", peak, i);
                return 0;
            }
        }else if(i == 29){
            if(arr[i] > arr[i-1]){
                peak = arr[i];
                printf("Peak element is %d at index %d\n", peak, i);
                return 0;
            }
        }else{
            if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
                peak = arr[i];
                printf("Peak element is %d at index %d\n", peak, i);
                return 0;
            }
        }
    }

    return 0;

}