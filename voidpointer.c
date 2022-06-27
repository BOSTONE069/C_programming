#include <stdio.h>
int main()
{
        int a = 56;    // initialization of a integer variable 'a'.

        float b = 4.5; // initialization of a float variable 'b'.

        char c = 'k';  // initialization of a char variable 'c'.

        void *ptr;     // declaration of void pointer.

        // assigning the address of variable 'a'.
        ptr = &a;
        printf("value of 'a' is : %d", *((int *)ptr));

        // assigning the address of variable 'b'.
        ptr = &b;
        printf("\nvalue of 'b' is : %f", *((float *)ptr));

        // assigning the address of variable 'c'.
        ptr = &c;
        printf("\nvalue of 'c' is : %c", *((char *)ptr));
        return 0;
}