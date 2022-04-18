/* This is a sample program that asks users for some basic data and
prints it on screen in order to show what was entered */

#include <stdio.h>

int main()
{
  // Set up the variables that scanf will fill

  char firstInitial;
  char lastInitial;
  int age;
  int favorite_number;
  char favourite_color[10];

  printf("What letter does your first name begin with?\n");
  scanf(" %c", &firstInitial);

  printf("What letter does your last name begin with?\n");
  scanf(" %c", &lastInitial);

  printf("How old are you?\n");
  scanf(" %d", &age);

  printf("What is your favorite number (integer only)?\n");
  scanf(" %d", &favorite_number);

  printf("What is your favourite color?\n");
  scanf("%s", favourite_color);

  printf("\nYour intitials are %c.%c. and you are %d years old",firstInitial, lastInitial, age);
  printf("\nYour favorite number is %d.", favorite_number);
  printf("\nYout favorite color is %s.\n" , favourite_color);

  return 0;
}

