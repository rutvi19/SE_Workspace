/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include <conio.h>
// F = (9/5 * C) + 32
int main()
{   
         
        float F,C;
        printf("enter celsius:");
        scanf("%f",&C);
         
        F = (C * 9/5) + 32;
      
        
        printf("the converting c into f: %.2f ",F);
    return 0;
}
