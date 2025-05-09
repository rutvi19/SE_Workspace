#include <stdio.h>
#include <conio.h>
int main()
{
    int ss,sci,guj,eng,maths,sum;
    float per;
    
    printf("enter marks of ss:");
    scanf("%d",&ss);
    
    printf("enter marks of sci:");
    scanf("%d",&sci);
    
    printf("enter marks of guj:");
    scanf("%d",&guj);
    
    printf("enter marks of eng:");
    scanf("%d",&eng);
    
    printf("enter marks of maths:");
    scanf("%d",&maths);
    
    sum=ss+sci+maths+guj+eng;
    per=sum*100/500;
    
    printf("the percentage is: %f",per);
    return 0;
}