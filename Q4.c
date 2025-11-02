#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter the 1st number: ");
    scanf("%d", &a);
    printf("Enter the 2nd number: ");
    scanf("%d", &b);
    
    //using temp
    int temp=a;
    a=b;
    b=temp;
    printf("After swapping a = %d and b = %d.\n", a , b);

    //using arthematic
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping a=%d and b=%d.\n", a,b);

    //using pointers
    int *x=&a;
    int *y=&b;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("After swapping x=%d and y=%d.\n", a,b);

    

    return 0;
}