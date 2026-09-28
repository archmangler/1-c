#include <stdio.h>

int main() {
  // Operator Precedence
  int a = 10;
  int b = 20;
  int c = 30;
  int d = 40;
  int e = 50;
  int f = 60;
  int g = 70;
  int h = 80;

  int result = a + b * c / d - e + f * g / h;

  printf("Result: %d\n", result);

  return 0;
}
