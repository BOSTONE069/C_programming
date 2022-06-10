#include <stdio.h>
#include <stdlib.h>
/**
 * It copies the contents of one file to another
 *
 * @return The program is returning 0.
 */
int main()
{
        /* Declaring the variables. */
        char ch, source_file[100], target_file[100];
        FILE *source, *target;

       /* Asking the user to enter the name of the file to be copied. */
        printf("Enter the name of the file to be copied\n");
        scanf("%s", &source_file);

        /* Opening the file in read mode. */
        source = fopen(source_file, "r");

       /* Checking if the source file is empty. If it is empty, it will print "Press any key to
       exit..." and exit the program. */
        if(source == NULL)
        {
                printf("Press any key to exit...\n");
                exit(EXIT_FAILURE);
        }

        /* Asking the user to enter the name of the target file to be copied. */
        printf("Enter the name of the target file to be copied\n");
        scanf("%s", &target_file);

        /* Opening the target file in write mode. */
        target = fopen(target_file, "w");

        /* Checking if the target file is empty. If it is empty, it will print "Press any key to
               exit..." and exit the program. */
        if(target == NULL)
        {
                fclose(source);
                printf("Press any key to exit...\n");
                exit(EXIT_FAILURE);
        }

        /* Reading the source file character by character and writing it to the target file. */
        while ((ch = fgetc(source)) != EOF)
        {
                fputc(ch, target);
        }

        printf("File copied successfully\n");

       /* Closing the source and target files. */
        fclose(source);
        fclose(target);

        return 0;


}