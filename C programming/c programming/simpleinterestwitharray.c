#include <stdio.h>
#include <conio.h>
int main()
{
    int amt[3];
    int i,n=5;
    float I;
    
    for(i=0;i<3;i++)
    {
        printf("enter the amt:");
        scanf("%d",&amt[i]);
    }
    for(i=0;i<3;i++)
    {
        I=amt[i]*5*5/100;
        printf("\n simple intrest %f",I);
    }
   // printf("\n simple intrest is %d",amt[3]);
    

    return 0;
}
