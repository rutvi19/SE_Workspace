#include<stdio.h>
#include<conio.h>
struct tops
{
	char name[20];
	char tech[20];

}t1[5];
void main()
{
	int i,n;
	//clrscr();

	printf("Enter Total Students");
	scanf("%d",&n);

	printf("\n Enter Your Details");

	for(i=0;i<n;i++)
	{
		printf("\n Enter Your Name");
		scanf("%s",&t1[i].name);

		printf("\n Enter Your Technology");
		scanf("%s",&t1[i].tech);
	}

	printf("\n Your Name and Technology are");

	for(i=0;i<n;i++)
	{
		printf("\n Name is %s and Technology is %s",t1[i].name,t1[i].tech);
	}

	return 0;
}