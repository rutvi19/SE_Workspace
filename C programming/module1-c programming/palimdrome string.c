#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, len, isPalindrome = 1;

    // Input the string
    printf("Enter a string: ");
    scanf("%s", str);  // Reads string without spaces

    len = strlen(str);

    // Check for palindrome
    for (i = 0; i < len / 2; i++) 
    {
        if (str[i] != str[len - i - 1]) 
        {
            isPalindrome = 0;  // Not a palindrome
            break;
        }
    }

    // Output result
    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
