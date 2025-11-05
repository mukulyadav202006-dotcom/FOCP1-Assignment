#include<stdio.h>
int main()
{
    int spaces = 8;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            if(j%2){
                printf("0 ");
            }else {
                printf("1 ");
            }
        }
        for(int k=1; k<=spaces; k++){
            printf("  ");
        }
        for(int j=1; j<=i; j++){
            if(j%2){
                printf("0 ");
            }else{
                printf("1 ");
            }
        }
        printf("\n");
        spaces-=2;
    }

    return 0;
}