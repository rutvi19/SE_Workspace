#include<stdio.h>
#include<conio.h>
struct tops
{
	char name[20];
	char tech[20];

}t1;
void main()
{

	//clrscr();
	printf("\n Enter Your Details");

	printf("\n Enter Your Name");
	scanf("%s",&t1.name);

	printf("\n Enter Your Technology");
	scanf("%s",&t1.tech);

	printf("\n Your Name and Technology are");

	printf("\n Name is %s and Technology is %s",t1.name,t1.tech);



	getch();
}