/* This is program askks the user for thier bith year and calculates how old thry will be
 * in the current year uing the if...else... It also tells the user if they were born 
 * in a leap year. */

#include <stdio.h>

#define CURRENTYEAR 2022

int main()
{
  int yearBorn, age;

  printf("What year were you born?\n");
  scanf(" %d", &yearBorn);

  //This if statement can do some data validation, making sure 
  //the year makes sense
  //The statements will only execute if the year is after the 
  //current year

  if (yearBorn > CURRENTYEAR)
  {
    printf("Really? You havent been born yet?\n");
    printf("Congratulations on time travel!\n");
  }
  else
  {

    age  = CURRENTYEAR -yearBorn;

    printf("\nSo this year you will turn %d on your Birthday!!\n", age);
    
    //The seconf it statement uses the modulus operator to test if the 
    //year of birth was a Leap Year. Only if it is then this code will be executed
    
    if ((yearBorn % 4) == 0)
    {
      printf("\nYou were born in a Leap Year -- COOL!!\n");
    }
  }

  return 0;
}
