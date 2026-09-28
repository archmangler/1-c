#include <stdio.h>

int main() {

  double minutes = 0.0;
  double hours = 0.0;
  double days = 0.0;
  double weeks = 0.0;
  double months = 0.0;
  double years = 0.0;

  // get the number of minutes from the user
  printf("Enter the number of minutes: ");
  scanf("%lf", &minutes);

  // convert the number of minutes to hours
  hours = minutes / 60;
  printf("The number of hours is %lf\n", hours);

  // convert the number of hours to days
  days = hours / 24;
  printf("The number of days is %lf\n", days);

  // convert the number of days to weeks
  weeks = days / 7;
  printf("The number of weeks is %lf\n", weeks);

  // convert the number of weeks to months
  months = weeks / 4;
  printf("The number of months is %lf\n", months);

  // convert the number of months to years
  years = months / 12;
  printf("The number of years is %lf\n", years);
  return 0;
}
