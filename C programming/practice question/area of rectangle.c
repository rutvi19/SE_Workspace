#include <stdio.h>
#include <conio.h>

int main()
{
    float width,length,area;

    printf("enter width of rectangle:");
    scanf("%f",&width);
    
    printf("enter length of rectangle:");
    scanf("%f",&length);
    
    float ans=width*length;
    
    printf("the area of rectangle is %f",ans);

    return 0;
}