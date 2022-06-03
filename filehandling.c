#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * Fopen() opens a file for reading, writing, or appending
 *
 * @return The program is returning the contents of the file.
 */
int main()
{
    char fname[256];
    FILE *file;
    char ch;
    printf("Enter the name of the file to read:\n");
    scanf("%s", &fname);
    /* Opening the file for reading. */
    file = fopen(fname, "r");

    /* Reading the file character by character and printing it out. */
    while((ch = fgetc(file)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(file);
    return 0;
}