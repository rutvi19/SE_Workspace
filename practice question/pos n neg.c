#include <stdio.h>
#include <conio.h>
int main()
{
    int num;
    
    printf("enter number :");
    scanf("%d",&num);
    
    if(num>0)
    {
        printf("positive");
    }
    else
    {
        printf("negative");
    }

    return 0;
}