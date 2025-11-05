#include<stdio.h>
int main()
{
    int n;
    printf("Enter the total elements in array: ");
    scanf("%d", &n);
    
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter %d value of array: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    int min, max=0;
    for(int i=0; i<n; i++){
        if(arr[i]<min){
            min=arr[i];
        }else if(arr[i]>max){
            max=arr[i];
        }
    }

    printf("Maximum value in array: %d.\n", max);
    printf("Minimum value in array: %d.\n", min);

    return 0;
}