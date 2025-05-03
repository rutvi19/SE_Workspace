#include<stdio.h>
#include<conio.h>

void main()
{
    int num1,num2,ans;
    char myinput;
    
    printf("Enter Your Prefered Operation \n Press + for addition \n Press - for substraction \n Press * for multiplication \n Press / for divison");
    scanf("%c",& myinput);
    
    printf("Enter Number 1");
    scanf("%d",&num1);
    
    printf("Enter Number 2");
    scanf("%d",&num2);
    
    switch(myinput)
    {
        case '+' : 
        ans = num1+num2;
        printf("%d",ans);
        break;
        
        case '-' :
        ans = num1-num2;
        printf("%d",ans);
        break;
        
        case '*' :
        ans = num1*num2;
        printf("%d",ans);
        break;
        
        case '/' :
        ans = num1/num2;
        printf("%d",ans);
        break;
    }

    getch();
}
