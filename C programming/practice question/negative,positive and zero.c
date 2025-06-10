#include <stdio.h>
#include <conio.h>


    
    int main()
{
    int a;
    printf("ente number:");
    scanf("%d",&a);
    if(a>0)
        printf("the %d is positive",a);
    else if(a<0)
        printf("the %d is negative",a);
    else
        printf("the %d is zero",a);

    return 0;
}