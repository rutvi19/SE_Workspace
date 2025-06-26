#include <stdio.h>

int main() 
{
    int n, i, j, temp;
    int na[5];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n - 1; i++) 
    {
        for (j = i + 1; j < n; j++) 
        {
            if (arr[i] < arr[j]) 
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    

    printf("Array in descending order:\n");
    for (i = 0; i < 5; i++) 
    {
        //printf("%d ", arr[i]);
        
        if(arr[i]>90)
        {
           printf("1"); 
        }
        else
        {
            printf("0");
        }
        
    }
    printf("\n");

    return 0;
}