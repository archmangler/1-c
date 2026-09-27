#include <stdio.h>

int main() {

  int myFavouriteNumber = 0;
  int numberOfAttempts = 0;

  while (numberOfAttempts < 3) {
    printf("Enter your favourite number: ");
    scanf("%d", &myFavouriteNumber);
    printf("Your favourite number is: %d\n", myFavouriteNumber);
    numberOfAttempts++;
    if (myFavouriteNumber == 7) {
      printf("You guessed the correct number!\n");
      break;
    }
  }

  if (numberOfAttempts == 3) {
    printf("You have reached the maximum number of attempts.\n");
  }
  return 0;
}
