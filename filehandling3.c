#include <stdio.h>
#include <string.h>
#include <stdlib.h>



/**
 * This function will open a file and append data to the end of the file
 *
 * @return The program is returning 0.
 */
int main()
{
                char fname[256];
                FILE *file;
                char ch;
                printf("Enter the name of the file to write:\n");
                scanf("%s", &fname);


               /* Opening the file for appending data into a file. */
                file = fopen(fname, "a");

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