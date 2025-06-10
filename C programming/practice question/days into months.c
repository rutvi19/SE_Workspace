

#include <stdio.h>

int main() {
  int totalDays, months, days;

  printf("Enter the number of days: ");
  scanf("%d", &totalDays);

  months = totalDays / 30;
  days = totalDays % 30;

  printf("%d days is equal to %d months and %d days\n", totalDays, months, days);

  return 0;
}