#include <stdio.h>

int main() 
{
  int month;

  printf("Enter the month number (1-12): ");
  scanf("%d", &month);

  if (month < 1 || month > 12) 
  {
    printf("Invalid month number.\n");
  } 
  else 
  {
        if (month == 2)
        {
            printf("Number of days in this month: 28 or 29 (leap year)\n");
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11) 
        {
            printf("Number of days in this month: 30\n");
        }   
        else    
        {
            printf("Number of days in this month: 31\n");
        }
    }

  return 0;
}