

#include <stdio.h>

int main()
{   
    float F, C;
    
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &F);
         
    C = (F - 32) * 5.0 / 9.0;  // Correct conversion formula
        
    printf("Temperature in Celsius: %.2f\n", C);

    return 0;
}