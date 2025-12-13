#include<stdio.h>
int main()
{
     int arr[30] = {5, 12, 7, 20, 3, 15, 8, 1, 10, 99,
                   23, 45, 67, 89, 34, 21, 43, 54, 76, 87,
                   32, 14, 26, 38, 49, 51, 62, 73, 84, 95};
    
    int count = 0;

    for (int i = 0; i < 30; i++) {
        int num = arr[i];
        int prime = 1;

        if (num <= 1)
            prime = 0;
        else {
            for (int j = 2; j * j <= num; j++) {
                if (num % j == 0) {
                    prime = 0;
                    break;
                }
            }
        }

        if (prime)
            count++;
    }

    printf("Count of prime numbers: %d\n", count);

    return 0;
}