#include <stdio.h>

int main() {
    int number;

    // Ask the user to input an integer
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is even or odd using modulus operator
    if (number % 2 == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }

    // Check if the number is positive, negative, or zero using relational operators
    if (number > 0) {
        printf("The number is positive.\n");
    } else if (number < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    // Check if the number is a multiple of both 3 and 5 using modulus operator
    if ((number % 3 == 0) && (number % 5 == 0)) {
        printf("The number is a multiple of both 3 and 5.\n");
    } else {
        printf("The number is NOT a multiple of both 3 and 5.\n");
    }

    return 0;
}
