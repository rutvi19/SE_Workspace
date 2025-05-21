#include <stdio.h>

int main() {
  int day_number;

  printf("Enter the day number (1-7): ");
  scanf("%d", &day_number);

  if (day_number == 1) 
  {
    printf("Monday\n");
  }
  else if (day_number == 2) 
  {
    printf("Tuesday\n");
  }
  else if (day_number == 3) 
  {
    printf("Wednesday\n");
  }
  else if (day_number == 4) 
  {
    printf("Thursday\n");
  } 
  else if (day_number == 5) 
  {
    printf("Friday\n");
  } 
  else if (day_number == 6) 
  {
    printf("Saturday\n");
  }
  else if (day_number == 7) 
  {
    printf("Sunday\n");
  }
  else 
  {
    printf("Invalid day number. Please enter a number between 1 and 7.\n");
  }

  return 0;
}