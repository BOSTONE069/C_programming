// This is a program for finding using constants declared as global variable

#include <stdio.h>

#define LENGTH 10
#define WIDTH  5
#define NEWLINE '\n'

/**
 * The function `main()` is the entry point of the program. It is the first function that is called
 * when the program starts
 *
 * @return The value of area is being returned.
 */
int main() {
   int area;

   area = LENGTH * WIDTH;
   printf("value of area : %d", area);
   printf("%c", NEWLINE);

   return 0;
}
