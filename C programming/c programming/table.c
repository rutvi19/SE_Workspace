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
    int i,num,ans; //1*1=1   
    printf("enter any number:");
    scanf("%d",&num);
    
    for(i=1; i<=10; i++)
    {
        ans = num * i;
        printf("%d * %d = %d \n ",num, i, ans);
    }
    return 0;
}