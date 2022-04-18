#include <stdio.h>

//Thi is a fumction that work with floating point values
int main ()
{
  float a, b;

  printf ("How much of a bonus did you get ? ");
  scanf("%f", &a);

  b = .85 * a;
  printf("if you give 15 percent to charity, you will still ");
  printf("have %.2f", b);
  printf("\n");
  return 0;
}
