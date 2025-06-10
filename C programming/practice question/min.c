#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b,c,min;
    printf("enter a:");
    scanf("%d",&a);
    
    printf("enter b:");
    scanf("%d",&b);
    
    printf("enter c:");
    scanf("%d",&c);

    if(a<=b && a<=c)
    {
        min=a;
    }
    else if(b<=a && b<=c)
    {
        min=b;
    }
    else
    {
        min=c;
    }
    printf("the minimum number: %d",min);
    return 0;
}