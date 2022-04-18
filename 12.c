#include <stdio.h>

int main ()
{
    int i;

    i = 0;
    while (i < 10) {
        i++;
        printf("%d", i / 2);
    }
    printf("\n");
    return (0);
}