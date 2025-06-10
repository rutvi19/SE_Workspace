#include <stdio.h>

int main() {
    double num1, num2;
    char operator;
    char choice;

    do {
        printf("Enter first number: ");
        scanf("%lf", &num1);

        // Loop until a valid operator is entered
        while (1) {
            printf("Enter an operator (+, -, *, /, %%): ");
            scanf(" %c", &operator);  // The space before %c handles leftover newline characters

            if (operator == '+' || operator == '-' || operator == '*' || operator == '/' || operator == '%') {
                break;  // Valid operator
            } else {
                printf("Invalid operator! Please enter one of +, -, *, /, %%.\n");
            }
        }

        printf("Enter second number: ");
        scanf("%lf", &num2);

        // Perform the operation
        switch (operator) {
            case '+':
                printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
                break;
            case '-':
                printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
                break;
            case '*':
                printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
                break;
            case '/':
                if (num2 != 0)
                    printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
                else
                    printf("Error: Division by zero is not allowed.\n");
                break;
            case '%':
                if ((int)num2 != 0)
                    printf("%d %% %d = %d\n", (int)num1, (int)num2, (int)num1 % (int)num2);
                else
                    printf("Error: Division by zero is not allowed in modulus.\n");
                break;
        }

        // Ask if user wants to perform another calculation
        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Goodbye!\n");

    return 0;
}
