#include<stdio.h>
//with para with return type
int add(int a,int b)
{
   return a+b; 
}
int main()
{
        int a,b;
        
        for(int i=1;i<=5;i++)
        {
            printf("\n Enter Value for a: ");
            scanf("%d",&a);
            printf("\n Enter Value for b: ");
            scanf("%d",&b);
            
             printf("Addition of two value is : %d",add(a,b));
        }
      
       
        
        
    return 0;
}