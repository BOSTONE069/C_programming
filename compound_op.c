/* This is a program that increases a counter for 1 to 5, printing updates and then counts it back 
 * down to 1. However, it uses compound operators*/

#include <stdio.h>

int main ()
{
  int ctr = 0;

  ctr += 1; // increases counter to 1
  printf("Counter is at %d. \n", ctr);
  ctr += 1; // increases counter to 2
  printf("Counter is at %d, \n", ctr);

  printf("Counter is at %d. \n", ctr += 1);
  ctr += 1; //increases counter to 4
  printf("Counter is at %d. \n", ctr);

  printf("Counter is at %d. \n", ctr += 1);
  ctr -= 1; //decreases the counter to 4
  printf("Counter is at %d. \n", ctr);
  printf("Counter is at %d. \n", ctr -= 1);
  printf("Counter is at %d. \n", ctr -= 1);
  printf("Counter is at %d. \n", ctr -= 1);

  return 0;
}


