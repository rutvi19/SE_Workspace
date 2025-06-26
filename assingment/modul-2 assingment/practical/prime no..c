#include <stdio.h>

int main() {
    int num, i, isPrime;

    // Input from user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // --- Check if the number is prime ---
    isPrime = 1; // Assume it's prime

    if (num <= 1) {
        isPrime = 0; // 0 and 1 are not prime
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0; // Not prime
                break;
            }
        }
    }

    // Output result
    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    // --- Challenge: Print all prime numbers up to 'num' ---
    printf("Prime numbers between 1 and %d are:\n", num);
    for (int n = 2; n <= num; n++) {
        isPrime = 1; // Assume n is prime
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d ", n);
    }

    printf("\n");
    return 0;
}
