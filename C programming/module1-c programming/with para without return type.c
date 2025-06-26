/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <conio.h>
//with para without return type
void add(int a,int b)
{
	int c;

	 c=a+b;
	printf("\n %d",c);
}
int main()
{
	int a,b;
	for(int i=1; i<=5; i++)
	{
		printf("\n enter number a:");
		scanf("%d",&a);
		printf("\n enter number b:");
		scanf("%d",&b);
         add(a,b);
	}

	return 0;
}
