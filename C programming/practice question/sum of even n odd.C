#include <stdio.h>

int main() 
{ 
    int end, start, count_even = 0, count_odd = 0, I; 
    
    printf("Enter the start of array"); 
    scanf("%d", &start); 
    
   printf("Enter the end of array"); 
    scanf("%d", &end); 
    
    for (I = start; I < end; I++) 
    {
        if (I%2== 0) 
            count_even+=I; 
        else 
            count_odd+=I;
    }

    
    printf("There are %d even numbers in the array\n", count_even); 
    printf("There are %d odd numbers in the array\n", count_odd); 
    
    return 0;
}
