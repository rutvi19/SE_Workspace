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
    int base=0,height=0,ans,trc,width,length,radius;

    
    printf("Enter Your Prefered Operation \n press 1 for tirangle \n Press 2 for rectangle \n Press 3 for circle: \n");
    scanf("%d",&trc);
    
    if(trc == 1)
    {
        printf("enter the base:");
         scanf("%d",&base);
         printf("enter the height:");
         scanf("%d",&height);
        ans=0.5*base*height;
        printf("the area of tirangle %d",ans);
    }
     if(trc == 2)
     {
         printf("enter the width:");
         scanf("%d",&width);
         printf("enter the length:");
         scanf("%d",&length);
         ans=width*length;
         printf("the area of rectangle is  %d",ans);
     }
     if(trc == 3)
     {
         printf("enter the radius:");
         scanf("%d",&radius);
         ans=3.14*radius*radius;
         printf("the area of circle is  %d",ans);
     }
     else
     {
         printf("invalid choice");
     }

    return 0;
}
