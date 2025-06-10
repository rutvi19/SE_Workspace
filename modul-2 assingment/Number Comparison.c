#include <stdio.h>

int main() {
    int num1, num2, num3;
    int largest, smallest;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // ----------------- Using If-Else -----------------
    // Finding Largest using if-else
    if(num1 >= num2 && num1 >= num3)
        largest = num1;
    else if(num2 >= num1 && num2 >= num3)
        largest = num2;
    else
        largest = num3;

    // Finding Smallest using if-else
    if(num1 <= num2 && num1 <= num3)
        smallest = num1;
    else if(num2 <= num1 && num2 <= num3)
        smallest = num2;
    else
        smallest = num3;

    printf("\nUsing If-Else:\n");
    printf("Largest Number: %d\n", largest);
    printf("Smallest Number: %d\n", smallest);

    
    return 0;
}
