#include<stdio.h>
#include<conio.h>
#include<string.h>

int main() 
{
    char s[50];
    int i;
    
    printf("Enter Your String : ");
    scanf("%s",&s);
    

    for (i = 0; s[i] != '\0'; ++i);
    
    printf("Length of the string: %d", i);
    return 0;
}