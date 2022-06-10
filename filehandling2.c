#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * This function is opening a file for writing, and then it is writing the content of the file
 *
 * @return The program is returning 0.
 */
int main()
{
   /* This is declaring the variables that are going to be used in the program. */
    char fname[256];
    FILE *file;
    char ch;
   /* This is asking the user to enter the name of the file that they want to write to. */
    printf("Enter the name of the file to write:\n");
    scanf("%s", &fname);

    /* This is opening the file for writing. */
    file = fopen(fname, "w");

    printf("Write the content of the file(Press 'Z' to stop):\n");
   /* Flushing the input buffer. */
    fflush(stdin);
    scanf("%c", &ch);

   /* This is a while loop that is checking to see if the character is not equal to Z. If it is not
   equal to Z, then it will print the character to the file. */
    while(ch != 'Z')
    {
        fprintf(file, "%c", ch);
        scanf("%c", &ch);
    }

   /* Closing the file. */
    fclose(file);
    return 0;
}