#include<stdio.h>
#include<math.h>
int main()
{
    int originalNum, num, remainder, n=0;
    double result = 0.0;

    printf("Enter any positive number: ");
    scanf("%d", &originalNum);

    num = originalNum; // store the original number in a temporary variable

    //S-1, count the number of digits
    // A while loop is used here to count how many digits are in the number
    while(num!=0){
        num/=10; // This divides the number by 10(eg- 153->15->1->0)
        ++n; // This increments the count each time a division occurs
    }

    num=originalNum; // reset the temp no. back to the original value

    // S-2, cal the sum of powers of ecah digit 
    // This loop extracts each digit and raises it to the power 'n' ( the toatl digit count).
    while(num!=0){
        remainder = num % 10; // This gives the last digit(eg- 153 % 10 = 3)

        //pow(base, exponent) calculates the power (eg- 3^3 = 27)
        // we use double for result baecause pow() returns a double type.
        result+= pow(remainder, n);

        num/=10; // This removes the last digit (eg-153-> 15)
    }

    //S-3, compare an ddisplay the result
    // we cast the double result back to an int for comparison.
    if((int)result == originalNum)
        printf("%d is an armstrong number.\n",  originalNum);
        else{
            printf("%d is not an armstrong number.\n", originalNum);
    }
    return 0;
}