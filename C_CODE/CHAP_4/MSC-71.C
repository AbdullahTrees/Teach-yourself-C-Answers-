#include <stdio.h>

unsigned long int series(void);

unsigned long int num = 21;

int main(void)
{
	int i;

	for (i=0; i<10; i++)
		printf("%lu ", series());

	return 0;
}

unsigned long int series(void)
{
	num = (num*1468) % 467;

	return num;
}