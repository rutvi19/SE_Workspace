#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, i, j;

    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &n);

    printf("Pascal's Triangle (Using Loops):\n");

    for(i = 0; i < n; i++) {
        // Print leading spaces for alignment
        for(j = 0; j < n - i - 1; j++)
            printf("  ");

        for(j = 0; j <= i; j++)
            printf("%4d", combination(i, j)); // Print value using combination formula

        printf("\n");
    }

    return 0;
}
