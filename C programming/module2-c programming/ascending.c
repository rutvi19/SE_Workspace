#include <stdio.h>

int main() 
{
    int n, i, j, temp;
    int arr[5]={4,5,2,6,3};

    for (i = 0; i < 5 ; i++) 
    {
        for (j = i + 1; j < 5; j++) 
        {
            if (arr[i] > arr[j]) 
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Array in asending order:\n");
    for (i = 0; i < 5; i++) 
    {
        printf("%d ", arr[i]);
        
    }
    printf("\n");

    return 0;
}