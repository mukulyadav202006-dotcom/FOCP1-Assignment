#include<stdio.h>
#include<math.h>
int main()
{
    int originalNum, num, remainder, n=0;
    double result = 0.0;
     
    printf("Enter any positive number: ");
    scanf("%d", &originalNum);

    num = originalNum; 
    while(num!=0){
        num/=10;
        ++n;
    }

    num=originalNum;
    while(num!=0){
        remainder = num % 10; 
        result+= pow(remainder, n);

        num/=10; 
}
    if((int)result == originalNum)
        printf("%d is an armstrong number.\n",  originalNum);
        else{
            printf("%d is not an armstrong number.\n", originalNum);
    }
    return 0;
}