#include <stdio.h>

int main() 
{
    int n, i, j;

    // Ask the user for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Generate the pattern
    for (i = 1; i <= n; i++) 
    {
        for (j = 1; j <= i; j++)
         {
            printf("%c", 'A' + j - 1); // Print the corresponding alphabet
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}