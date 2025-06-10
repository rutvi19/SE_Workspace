#include <stdio.h>
#include <conio.h>



int main() 
{
    int num, rev= 0, rem, original_num;

    printf("Enter an integer: ");
    scanf("%d", &num);
    
    original_num = num; 

    for ( ; num != 0; num /= 10)
    {
        rem = num % 10;
        rev  = rev * 10 + rem;
    }
    printf("Reverse of %d is %d\n", original_num, rev);

    return 0;
}