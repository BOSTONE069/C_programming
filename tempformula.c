#include <stdio.h>

/* print Fahrenheit-Celcsius table
for fahr =0, 20, ...., 300*/

int main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    /* A while loop that will print the fahrenheit and celsius values until the fahrenheit value is
    greater than the upper value. */
    while (fahr <= upper){
        celsius = 5 * (fahr -32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}