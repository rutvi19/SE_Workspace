/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <conio.h>

int main()
{
    int num1=0,num2=1,fib=0,loop;
    printf("how many fibonacci number you want to see:");
    scanf("%d",&loop);
    
    while(loop>0)
    {
        printf("%d,",fib);
        fib=num1+num2;
        num1=num2;
        num2=fib;
        loop--;
    }

    return 0;
}