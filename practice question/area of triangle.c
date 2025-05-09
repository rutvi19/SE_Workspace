#include <stdio.h>
#include <conio.h>

int main()
{
    float base,height,area;

    printf("enter base of triangle:");
    scanf("%f",&base);
    
    printf("enter height of triangle:");
    scanf("%f",&height);
    
    float ans=0.5*base*height;
    
    printf("the area of triangle is %f",ans);

    return 0;
}