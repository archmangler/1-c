#include <stdio.h>
// pay calculator following taxation rules

int main() {
  int hoursWorked; // hours worked in a week
  int incomeBand1 = 300;
  int incomeBand2 = 150;

  int taxes = 0;
  int netPay = 0;
  int grossPay = 0;
  int overtimePay = 0;

  double taxRateBand1 = 0.15;
  double taxRateBand2 = 0.20;
  double taxRateBand3 = 0.25;

  printf("Enter hours worked: ");
  scanf("%d", &hoursWorked);

  grossPay = hoursWorked * 12;
  overtimePay = (hoursWorked - 40) * 1.5 * 12;

  if (grossPay <= incomeBand1) {
    taxes = grossPay * taxRateBand1;
  } else if (grossPay <= incomeBand2 + incomeBand1 && grossPay > incomeBand1) {
    taxes =
        (incomeBand1 * taxRateBand1) + (grossPay - incomeBand1) * taxRateBand2;
  } else if (grossPay > incomeBand2 + incomeBand1) {
    taxes = (incomeBand1 * taxRateBand1) + (incomeBand2 * taxRateBand2) +
            (grossPay - incomeBand1 - incomeBand2) * taxRateBand3;
  } else {
    taxes = 0;
  }

  netPay = grossPay - taxes;

  printf("Gross pay: $%d\n", grossPay);
  printf("Taxes: $%d\n", taxes);
  printf("Overtime pay: $%d\n", overtimePay);
  printf("Net pay: $%d\n", netPay);
  return 0;
}
