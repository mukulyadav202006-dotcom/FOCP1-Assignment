#include<stdio.h>
int main()
{
    int n;
    printf("Enter the total no. of elements in array: ");
    scanf("%d", &n);

    int arr[n];

    for(int i=0; i<n ; i++){
        printf("Enter %d element: ", i+1);
        scanf("%d", &arr[i]);
    }

    for(int i=0;i<n;i++){
        if(arr[i]==99){
            printf("Element found at index %d.\n", i);
            break;
        }else if(i==n-1){
            printf("Element not found.\n.");
        }
    }

    return 0;

}