#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    printf("Enter a number to print all primes up to it: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are:\n", n);

    for(i = 2; i <= n; i++) { // start from 2 as 1 is not prime
        isPrime = 1; // assume i is prime

        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                isPrime = 0; // i is divisible by j, not prime
                break;
            }
        }

        if(isPrime)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}
