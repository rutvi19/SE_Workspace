#include <stdio.h>
#include <conio.h>



int main() 
{
  int a,b;
  printf("enter a:");
  scanf("%d",&a);
  
  printf("enter b:");
  scanf("%d",&b);
  
  if(a<b)
  {
      printf("a is minimum");
  }
  else
  {
      printf("b is minimum");
  }
 
  return 0;
}