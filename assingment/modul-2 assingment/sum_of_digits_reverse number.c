#include <stdio.h>

int main() {
    int num, digit, sum = 0, reverse = 0, temp;

    printf("Enter an integer: ");
    scanf("%d", &num);

    temp = num;

    // Sum of digits and reverse the number using while loop
    while(temp != 0) {
        digit = temp % 10;              
        sum += digit;                   
        reverse = reverse * 10 + digit; 
        temp /= 10;                     
    }

    printf("\nResults:\n");
    printf("Sum of digits of %d = %d\n", num, sum);
    printf("Reverse of %d = %d\n", num, reverse);

    return 0;
}
