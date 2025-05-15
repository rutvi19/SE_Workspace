#include<stdio.h>
#include<conio.h>
int main()
{
    
    int marks[]={10,20,30,40,50,60,70,80,90,100};

    for(int i=0;i<9;i++)
    {
        printf("marks[%d] = %d\n",i,marks[i]);
    }
    return 0;
}