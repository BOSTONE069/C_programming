/* This is a sample program that lists three kids and their school supply needs, 
 * as well as cost to buy the supplies */

#include <stdio.h>
#include <string.h>
#include "Header1.h" // This is our own made header file

int main ()
{
  int age;
  char childname[14] = "Thomas";

  printf("\n%s have %d kids. \n", FAMILY, KIDS);

  age = 11;
  printf("The oldest, %s, is %d. \n", childname, age);

  strcpy(childname, "Christopher");
  age = 6;
  printf("The middle boy, %s is %d. \n", childname, age);

  age = 3;
  strcpy(childname, "Benjamin");
  printf("The youngest, %s, is %d. \n", childname, age);

  return 0;

}
