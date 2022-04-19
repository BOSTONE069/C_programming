/* This program asks the user for their birth year and also calculates how old they will be in the current year. 
 * It also cheks to make sure a future year has not been entered.)
 * It then tells the user if they were born in a leap year. */

#include <stdio.h>

# define CURRENTYEAR 2022

int main ()
{
        int yearBorn, age;

        printf("What year were you born?\n");
        scanf(" %d", &yearBorn);

        //This if statement can do some validation, making sure the year makes sense
        //The statemnts will only execute if the year is after the current year


        if (yearBorn > CURRENTYEAR)
        {
          printf("Really? You haven't been born yet?\n");
          printf("Want to try again with different year?\n");
          printf("What year were you born?\n");
          scanf(" %d", &yearBorn);

        }

        age = CURRENTYEAR - yearBorn;

        printf("\nSo this year you will turn %d on your birthday!!\n", age);

        //The second if statment uses the mudulus operator to test if 
        //the year of birth was a Leap year. Again, only if it is will 
        //the code execute

        if ((yearBorn % 4) == 0)
        {
          printf("\nYou were born in a Leap Year -- Cool!\n");
        }

        return 0;
}
