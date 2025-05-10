#include<stdio.h>
//with para without return type
void add(int a,int b)
{
   int c;
   c=a+b;
   printf("%d",c);
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
            
             add(a,b);
        }
      
       
        
        
    return 0;
}