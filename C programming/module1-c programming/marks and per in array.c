#include<stdio.h>
#include<conio.h>

void main()
{
   int marks[5];
   int i,total=0; 
   float avg;
    
   for(i=0;i<5;i++)
   {
       printf("Enter Your Marks For Subject");
       scanf("%d",&marks[i]);
       
        
   }
  
    for(i=0;i<5;i++)
    {
       // printf("\n value for marks %d is %d",i,marks[i]);
        total+=marks[i];
    }
     printf("\n Total marks are : %d",total);
     
     avg=total/5;
    
    printf("percentage is %f",avg);
     
    
    getch();
}