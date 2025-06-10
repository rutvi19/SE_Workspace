#include <stdio.h>
#include <conio.h>

int main()
{
    int marks;
    printf("enter marks:");
    scanf("%d",&marks);
    
   if(marks>=90)
   {
       printf("A grade");
   }
   if(marks>=80)
   {
       printf("B grade");
   }
   if(marks>=70)
   {
       printf("c grade");
   }
   if(marks>=60)
   {
       printf("d grade");
   }
   if(marks>=40)
   {
       printf("e grade");
   }
   else
   {
       printf("fail");
   }

    return 0;
}