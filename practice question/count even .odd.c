#include <stdio.h>

int main() 
{ 
    int a[50], n, count_even = 0, count_odd = 0, I; 
    
    printf("Enter the size of the array\n"); 
    scanf("%d", &n); 
    
    printf("Enter the elements of the array\n"); 
    
    for (I = 0; I < n; I++) 
    {
        scanf("%d", &a[I]); 
    }

    for (I = 0; I < n; I++) 
    { 
        if (a[I]%2== 0) 
            count_even++; 
        else 
            count_odd++; 
    }

    printf("There are %d even numbers in the array\n", count_even); 
    printf("There are %d odd numbers in the array\n", count_odd); 
    
    return 0;
}