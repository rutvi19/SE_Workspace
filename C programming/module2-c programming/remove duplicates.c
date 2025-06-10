#include <stdio.h>
#include <conio.h>

int main()
{
    int i,j,n,k;
    
    printf("enter the elements:");
    scanf("%d",&n);
    
    int arr[n];
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for (i = 0; i < n ; i++)
    {
        for (j = i + 1; j < n;) 
        {
            
            if(arr[i] == arr[j])
            {
                for (k = j; k < n - 1; k++) 
                {
                    arr[k] = arr[k + 1];
                }
                n--; // Reduce array size
            } 
            else 
            {
                j++; // Only increment if no duplicate
            }
             
        }
    }   
     printf("Array after removing duplicates:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}


