#include <stdio.h>

int main()
{
  int day_month;

  printf("Enter the day month(1-12): ");
  scanf("%d", &day_month);

  if (day_month == 1) 
  {
    printf("january\n");
  }
  else if (day_month == 2) 
  {
    printf("feburary\n");
  }
  else if (day_month == 3) 
  {
    printf("march\n");
  }
  else if (day_month == 4) 
  {
    printf("april\n");
  } 
  else if (day_month == 5) 
  {
    printf("may\n");
  } 
  else if (day_month == 6) 
  {
    printf("june\n");
  }
  else if (day_month == 7) 
  {
    printf("july\n");
  }
  else if (day_month == 8) 
  {
    printf("august\n");
  }
  else if (day_month == 9) 
  {
    printf("september\n");
  }
  else if (day_month == 10) 
  {
    printf("october\n");
  }
  else if (day_month == 11) 
  {
    printf("november\n");
  }
  else if (day_month == 12) 
  {
    printf("december\n");
  }
  else 
  {
    printf("Invalid day number. Please enter a number between 1 and 12.\n");
  }

  return 0;
}