#include <stdio.h>
#include <stdlib.h>

int main() {
    int secretNumber, guess, attempts = 0, maxAttempts = 7;

    // Manually seed the random generator without time.h
    srand(42); // Fixed seed (always same random sequence)

    secretNumber = rand() % 100 + 1; // Generates a "random" number between 1 and 100

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have chosen a number between 1 and 100.\n");
    printf("You have %d attempts to guess it.\n\n", maxAttempts);

    while(attempts < maxAttempts) {
        printf("Attempt %d: Enter your guess: ", attempts + 1);
        scanf("%d", &guess);
        attempts++;

        if(guess == secretNumber) {
            printf("Congratulations! You guessed the correct number %d in %d attempts!\n", secretNumber, attempts);
            break;
        } else if(guess < secretNumber) {
            printf("Too low! Try a higher number.\n");
        } else {
            printf("Too high! Try a lower number.\n");
        }
    }

    if(guess != secretNumber) {
        printf("\nSorry! You've used all %d attempts. The number was %d.\n", maxAttempts, secretNumber);
    }

    return 0;
}
