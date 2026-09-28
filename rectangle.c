#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  // declare variables
  double length = 0.0;
  double width = 0.0;
  double area = length * width;
  double perimeter = 2 * (length + width);

  int numberOfarguments = argc;
  char *argument1 = argv[1];
  char *argument2 = argv[2];

  printf("Number of arguments: %d\n", numberOfarguments);

  printf("Argument 1: %s\n", argument1);
  printf("Argument 2: %s\n", argument2);

  if (numberOfarguments == 3) {
    length = atof(argument1);
    width = atof(argument2);
  }

  // get user input
  printf("Enter the length of the rectangle: ");
  scanf("%lf", &length);

  printf("Enter the width of the rectangle: ");
  scanf("%lf", &width);

  // calculate area and perimeter
  area = length * width;
  perimeter = 2 * (length + width);

  // print results
  printf("The area of the rectangle is %f\n", area);
  printf("The perimeter of the rectangle is %f\n", perimeter);
  printf("\n\n");
  // print formatted results
  printf(
      "Width is %.2f and length is %.2f. The area of the rectangle is %.2f\n",
      width, length, area);
  printf("Width is %.2f and length is %.2f. The perimeter of the rectangle is "
         "%.2f\n",
         width, length, perimeter);

  return 0;
}
