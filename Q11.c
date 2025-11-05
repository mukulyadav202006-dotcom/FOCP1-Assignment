#include<stdio.h>
int main()
{
    int n;
    printf("Enter the total elements of array: ");
    scanf("%d", &n);

    int arr[n];
    int eve_arr[n], odd_arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the %d value of array: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            printf("Even number: %d.\n", arr[i]);
            eve_arr[i]=arr[i];
        }else{
            printf("Odd number: %d.\n", arr[i]);
            odd_arr[i]=arr[i];
        }
    }
    
    for(int i=0;i<n;i++){
        if(eve_arr[i]==arr[i]){
            printf("Even array element = %d at index %d.\n", eve_arr[i], i);
        }if(odd_arr[i]==arr[i]){
            printf("Odd array element = %d at index %d.\n", odd_arr[i], i);
        }
    }


    return 0;

}