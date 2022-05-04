//This is a program for finding the sum by calling the sum function

#include <stdio.h>
#include "main.h"

/**
 * The function sum() is called from main() and the function sum() calls the function sum() again
 *
 * @return 200
 */
int main()
{

   int *p;


   p = &y;

   *p = 200;

   sum();

   return 0;
}