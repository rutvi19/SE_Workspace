#include <stdio.h>

int main()
{
    int i,j,num;
    
    printf("Enter Your Rows:");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++)
    {
        int num2 = 2*i-1;
        
        for(j=1;j<=i;j++)
        {
            printf("%d",num2);
        }
        
        printf("\n");
    }
    

    return 0;
}