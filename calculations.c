#include <stdio.h>

int main() {
  int x = 10;
  int y = 20;
  int z = x + y;
  printf("The sum of %d and %d is %d\n", x, y, z);
  z--;
  printf(" -- The value of z is now %d\n", z);
  z++;
  printf(" ++ The value of z is now %d\n", z);
  z = z + 1;
  printf(" +1 The value of z is now %d\n", z);
  z = z - 1;
  printf(" -1 The value of z is now %d\n", z);
  z = z * 2;
  return 0;
}
