#include <stdio.h>
/*
Purpose: Tutorial: Basic C operations on variables and input/output
Author: Traiano Giuseppe Welcome
Date: 2026-09-27
*/

int main() {
  printf("Hello, Traiano Giuseppe Welcome to C programming!\n");
  // take a number and carry out operations on it
  int myFavouriteNumber = 0;
  int myFavouriteNumber2 = 0;
  int result = 0;
  char str[100];

  enum gender { male, female };
  enum gender myGender = male;
  enum gender herGender = female;
  enum company { google, facebook, apple, microsoft, amazon, oracle };
  enum company myCompany = microsoft;

  if (myCompany == google) {
    printf("The company is Google.\n");
    printf("The value of Google is %d\n", google);
  } else if (myCompany == facebook) {
    printf("The company is Facebook.\n");
    printf("The value of Facebook is %d\n", facebook);
  } else if (myCompany == apple) {
    printf("The company is Apple.\n");
    printf("The value of Apple is %d\n", apple);
  } else if (myCompany == microsoft) {
    printf("The company is Microsoft.\n");
    printf("The value of Microsoft is %d\n", microsoft);
  } else if (myCompany == amazon) {
    printf("The company is Amazon.\n");
    printf("The value of Amazon is %d\n", amazon);
  } else if (myCompany == oracle) {
    printf("The company is Oracle.\n");
    printf("The value of Oracle is %d\n", oracle);
  } else {
    printf("The company is not listed.\n");
  }

  if (myGender == male && herGender == female) {

    printf("You are a male and she is a female, you are compatible\n");
    printf("Go forth and multiply!\n");

  } else if (myGender == male && herGender == male) {
    printf(
        "You are a male and he is a male. This is uncharted territory ...\n");
    printf("You are both men, you are not compatible\n");
  } else {
    printf("You are not a male and she is not a female\n");
    printf("You are compatible, but not in the way you want ...\n");
  }
  // what's this odd operation?
  printf("You are a %s\n", myGender == male ? "male" : "female");

  double x = 0.0;
  printf("Enter a double: ");
  scanf("%lf", &x);

  printf("You entered the double number %lf\n", x);
  printf("\n\n");

  printf("\aEnter your favourite number: ");
  scanf("%d", &myFavouriteNumber);

  if (myFavouriteNumber > 7) {
    printf("\aYou entered a number greater than 7\n");
    printf("\aEnter another number: ");
    scanf("%d", &myFavouriteNumber2);
    result = myFavouriteNumber + myFavouriteNumber2;
    printf("\aThe result is %d\n", result);
  } else {
    printf("You entered a number less than 7\n");
    result = myFavouriteNumber - x;
    printf("\aThe result is %d\n", result);
  }
  // printf("You entered the number %d\n", myFavouriteNumber);

  return 0;
}
