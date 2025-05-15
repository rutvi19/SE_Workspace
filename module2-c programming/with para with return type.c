/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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
