
#include <stdio.h>

int main()
{
    int i,j,num;
    
    printf("Enter Your Rows:");
    scanf("%d",&num);
    int num2 = 1;
    for(i=1;i<=num;i++)
    {
        
        //num2+=1;
        for(j=1;j<=i;j++)
        {
            
            printf("%d",num2%2);
            num2++;
        }
        
        printf("\n");
    }
    

    return 0;
}