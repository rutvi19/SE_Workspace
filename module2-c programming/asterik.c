#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len;

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);  // Reads a word (no spaces)

    len = strlen(str);

    // Convert all characters to '*'
    for (i = 0; i < len; i++) 
    {
        str[i] = '*';
    }

    // Output the modified string
    printf("Modified string: %s\n", str);

    return 0;
}
