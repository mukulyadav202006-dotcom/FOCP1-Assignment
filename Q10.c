#include<stdio.h>
int main()
{
    int n;
    printf("Enter the total students in marks array: ");
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter the score of student %d: ", i+1);
        scanf("%d", &arr[i]);
    }    
    
    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i]==99){
            printf("Student %d scored 99.\n", i+1);
            count++;
          }   
    }
    printf("Total students scored 99 = %d.\n", count);

    return 0;

}