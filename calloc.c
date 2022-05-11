#include <stdio.h>
#include <stdlib.h>

/**
 * The calloc() function allocates memory for an array of n elements of size bytes each and returns a
 * pointer to the allocated memory. The memory is set to zero
 *
 * @return The number of elements to be entered.
 */
int main () {
   int i, n;
   int *a;

   printf("Number of elements to be entered:");
   scanf("%d",&n);

   a = (int*)calloc(n, sizeof(int));
   printf("Enter %d numbers:\n",n);
   /* Asking the user to enter the number of elements to be entered. */
   for( i=0 ; i < n ; i++ ) {
      scanf("%d",&a[i]);
   }

   printf("The numbers entered are: ");
   /* Printing the array. */
   for( i=0 ; i < n ; i++ ) {
      printf("%d ",a[i]);
   }
   free( a );

   return(0);
}