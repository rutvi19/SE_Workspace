#include<stdio.h>
#include<conio.h>

int main()
{
    char ch[100];
    char ch2[100];
    
    printf("Enter Value1: ");
    scanf("%s",&ch);
    
     printf("Enter Value2: ");
    scanf("%s",&ch2);
   
    
    printf("data is %s",strcpy(ch2,ch));
   
    
    
    return 0;
}