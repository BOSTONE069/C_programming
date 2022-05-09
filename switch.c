// This is a program for showing the use of switch case

#include <stdio.h>

int main () {

   /* local variable definition */
   char grade = 'B';

   /* A switch case statement. It is used to execute one statement from multiple conditions. */
   switch(grade) {
      case 'A' :
         printf("Excellent!\n" );
         break;
      case 'B' :
      case 'C' :
         printf("Well done\n" );
         break;
      case 'D' :
         printf("You passed\n" );
         break;
      case 'F' :
         printf("Better try again\n" );
         break;
      default :
         printf("Invalid grade\n" );
   }

   printf("Your grade is  %c\n", grade );

   return 0;
}
