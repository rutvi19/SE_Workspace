#include <stdio.h>

// Recursive function
unsigned long long factorial_recursive(int n) {
    if(n == 0) return 1;
    else return n * factorial_recursive(n - 1);
}

// Iterative function
unsigned long long factorial_iterative(int n) {
    unsigned long long fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;

    printf("Enter a number to calculate factorial: ");
    scanf("%d", &num);

    printf("Factorial (Recursive) = %llu\n", factorial_recursive(num));
    printf("Factorial (Iterative) = %llu\n", factorial_iterative(num));

    return 0;
}
