#include<stdio.h>
#include<conio.h>

void main()
{
    
    int num;
    
    printf("Enter Your Number");
    scanf("%d",&num);
    
    switch(num)
    {
        case 1:printf("\n Your Selected Language is English");
        break;
        
        case 2:printf("\n Your Selected Language is Hindi");
        break;
        
        case 3:printf("\n Your Selected Language is Gujarati");
        break;
        
        default : printf("Your Number is not valid");
        break;
    }
    
    

    getch();
}
