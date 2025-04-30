/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <conio.h>

int main()
{
    int s1=99, s2=90.99, s3=98.8888, s4=78.999999999, s5=56,sum,per;
    
    sum=s1+s2+s3+s4+s5;
    per=sum*100/500;
    
    printf("the sum of 5 subjects is %d",sum);
    printf("\n the percentage 5 subjects is %d",per);

    return 0;
}
