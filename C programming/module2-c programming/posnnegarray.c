#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    int i;
    int a[50];
    int pos=0;
    int neg=0;

    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    
    for(i=0;i<5;i++)
    {
        printf("Enter the elements of the array: ");
        scanf("%d",&a[i]);
    }

     for(i=0;i<5;i++)
    {
       
        printf("\n Total Elements are %d",a[i]);
       
        if(a[i]>0)
        {
            pos++;
        }
        else
        {
            neg++;
        }
       
    }

    printf("\n Total Positive Elements are %d",pos);    
    printf("\n Total Negative Elements are %d",neg);





    return 0;
}