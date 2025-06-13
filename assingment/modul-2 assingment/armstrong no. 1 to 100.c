#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result, n;

    printf("Armstrong numbers between 1 and 1000 are:\n");

    for (num = 1; num <= 1000; num++) {
        originalNum = num;
        result = 0;
        n = 0;

        // Count the number of digits
        int temp = originalNum;
        while (temp != 0) {
            temp /= 10;
            n++;
        }

        // Calculate the sum of digits raised to the power of n
        temp = originalNum;
        while (temp != 0) {
            remainder = temp % 10;
            result += pow(remainder, n);
            temp /= 10;
        }

        // Check if the number is an Armstrong number
        if (result == originalNum) {
            printf("%d ", originalNum);
        }
    }

    printf("\n");
    return 0;
}