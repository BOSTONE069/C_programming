#include <stdio.h>

int main()
{
  int number;

  printf("Enter a number\n");

  scanf("%d", &number);

  printf("The cube of the number is:%d\n", number*number*number);

  return 0;
}
