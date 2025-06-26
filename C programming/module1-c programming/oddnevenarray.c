/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int n,num,even,odd;
    int i;
    int a[50];
    
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    
    for(i=0;i<5;i++)
    {
        printf("Enter the elements of the array: ");
        scanf("%d",&a[i]);
    }

     for(i=0;i<5;i++)
    {
       
        printf("\n Total Elements are %d",a[i]);
        
    if(a[i]%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
    
}
    return 0;
}
