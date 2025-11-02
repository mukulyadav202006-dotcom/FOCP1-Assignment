#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);

    if(x>0 && y>0){
        printf("First quadrant.\n");
    }else if(x>0 && y<0){
        printf("Fourth quadrant.\n");
    }else if(x<0 && y>0){
        printf("Second quadrant.\n");
    }else if(x<0 && y<0){
        printf("Third quadrant.\n");
    }else if(x==0 && y==0){
        printf("On origin.\n");
    }else if(x==0){
        printf("On Y-Axis.\n");
    }else if(y==0){
        printf("On X-Axis.\n");
    }

    return 0;
}