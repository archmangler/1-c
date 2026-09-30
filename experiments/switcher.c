#include <stdio.h>

int main() {
  char operator;
  float left, right, result;

  printf("Enter and operator, a left value and a right value: ");
  scanf("%c %f %f", &operator, & left, &right);

  switch (operator) {
  case '*':
    result = left * right;
    printf("Multiplying: %.2f\n", result);
    break;
  case '/':
    result = left / right;
    printf("Dividing: %.2f\n", result);
    break;
  case '+':
    result = left + right;
    printf("Adding %.2f + %.2f = %.2f", left, right, result);
    break;
  case '-':
    result = left - right;
    printf("Subtracting: %.2f", result);
    break;
  default:
    printf("WARNING! Unknown Operator!\n");
    break;
  }
  return 0;
}
