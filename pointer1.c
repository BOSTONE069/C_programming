#include <stdio.h>

int main()
{
	int a[5]={10,20,30,40,50};
	int i;
	int *ptr=a;
	
	for (i=0; i<5; i++)
	{
		printf("\t%d", *ptr);
		ptr++;
	}
}
