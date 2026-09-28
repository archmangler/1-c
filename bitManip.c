#include <stdio.h>

int main() {

  unsigned int a = 60; // 0011 1100
  unsigned int b = 13; // 0000 1101
  unsigned int c = 0;

  int result = a & b; // 0000 1100
  printf("Line 1 - Value of result is %d\n", result);

  c = a | b; // 0011 1101
  printf("Line 2 - Value of c is %d\n", c);

  result = ~a; // 1100 0011
  printf("Line 3 - Value of result is %d\n", result);

  // check the value of a
  printf("The value of a is %d\n", a);
  printf("The value of a in binary is %08b\n", a);

  // bit shifting
  result = a << 2; // 1111 0000
  printf("Line 4 - Value of bitshifting - left shift - result is %d\n", result);

  result = a >> 2; // 0000 1111
  printf("Line 5 - Value of bitshifting in the opposite direction - right "
         "shift - result is %d\n",
         result);

  return 0;
}
