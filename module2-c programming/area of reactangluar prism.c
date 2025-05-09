#include <stdio.h>
#include <conio.h>

int main() 
{
    float width,lenght,height,ans;
    
    printf("enter width:");
    scanf("%f",&width);
    
    printf("enter height:");
    scanf("%f",&height);
    
    printf("enter lenght:");
    scanf("%f",&lenght);
    
    ans=(width*lenght+height*lenght+height*width);
    ans=ans*2;
    printf("area of reactangluar prism is %f",ans);
    return 0;
}
//area of reactangluar prism A=2(wl+hl+hw)