#include <stdio.h>

void reverseString(char str[]) {
    int len = 0, i;
    char temp;

    // Calculate string length manually
    while(str[len] != '\0') {
        len++;
    }

    // Reverse string manually
    for(i = 0; i < len/2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str); // for multi-word input

    reverseString(str);

    printf("Reversed String: %s\n", str);

    return 0;
}
