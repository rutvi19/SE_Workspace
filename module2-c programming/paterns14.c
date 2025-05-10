#include <stdio.h>

int main()
{
    int i,j,num;
    
    printf("Enter Your Rows:");
    scanf("%d",&num);
    int num2 = 1;
    for(i=1;i<=num;i++)
    {
        
      for(j=i;j>=1;j--)
        {
            
            printf("%d",j);
          
        }
        
        printf("\n");
    }
    

    return 0;
}