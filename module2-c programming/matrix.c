#include <stdio.h>
#define size 3

int main() 
{
    int matrix1[3][3], matrix2[3][3], result[3][3]={0};
    int i, j,k;

    
    printf("Enter elements of the first 3x3 matrix:\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            //printf("Element [%d][%d]: ", i, j);
            scanf("\n %d", &matrix1[i][j]);
        }
    }

    
    printf("Enter elements of the second 3x3 matrix:\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            //printf("Element [%d][%d]: ", i, j);
            scanf("\n %d", &matrix2[i][j]);
        }
    }

    
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            for(k=0; k<3; k++)
            {
                result[i][j]+= matrix1[i][k] + matrix2[k][j];
            }
        }
    }

    
    printf("Resultant matrix:\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
