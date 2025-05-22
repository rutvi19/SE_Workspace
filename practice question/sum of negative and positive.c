#include <stdio.h>

int main() {
    int num,start,end;
    int sum_positive = 0, sum_negative = 0;

    // Take two inputs
    printf("Enter first number: ");
    scanf("%d", &start);
    
    printf("Enter second number: ");
    scanf("%d", &end);

    for(num=start;num<=end;num++)
    {
    if (num > 0)
        sum_positive += num;
    else if (num < 0)
        sum_negative += num;
}
    // Output the results
    printf("Sum of positive numbers = %d\n", sum_positive);
    printf("Sum of negative numbers = %d\n", sum_negative);

    return 0;
}