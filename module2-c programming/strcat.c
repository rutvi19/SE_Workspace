#include<stdio.h>
#include<conio.h>

int main()
{
    char name[100];
    char surname[100];
    
    printf("Enter Name: ");
    scanf("%s",&name);
    
    printf("Enter Surname: ");
    scanf("%s",&surname);
    
    printf("%s",strcat(name,surname));
    
    
  
    
    
    return 0;
}