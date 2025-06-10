#include <stdio.h>
#include <conio.h>

int main()
{
    int marks;
    
    printf("enter the marks:");
    scanf("%d",&marks);
     
     
    if(marks>=35)
    {
        printf("pass");
    }
    else
    {
        printf("fail");
    }
     return 0;
}
