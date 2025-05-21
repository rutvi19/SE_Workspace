#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
   char fname[100],lname[100],myemail[100]="a@gmail.com",mypwd[100]="123456";
   
   printf("enter fname:");
   scanf("%s",&fname);
   
   printf("enter lname:");
   scanf("%s",&lname);
   
  if(strcmp(mypwd,fname)==0 && strcmp(myemail,lname)==0)
  {
      printf("login successfully");
  }
  else
  {
      printf("plz enter valid data");
  }
  
  /* printf("\n your pwd is:%s",mypwd);
   printf("\nyour email is:%s",myemail);*/
   
   
    return 0;
}