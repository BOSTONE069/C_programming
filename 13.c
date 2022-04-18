#include <stdio.h>

int main ()
{
    int i;

    i = -9;
    while (i < 0)
    {
        printf("%d", -i);
        i++;
    }
    printf("\n");
    return (0);
}