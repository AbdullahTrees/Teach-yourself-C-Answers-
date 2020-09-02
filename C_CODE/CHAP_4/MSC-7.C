#include <stdio.h>

unsigned long int global = 21;

void series(unsigned long int prev);

int main(void)
{
	char i;

	printf("Initial value = %u. The series function will be applied on this in a recurring fashion. \n", global);

	for (i = 1; i < 11; i++)
	{
		printf("%d) Value of series(%u) = ", i, global);
		series(global);
		printf("%u\n", global);
	}

	return 0;
}

void series(unsigned long int prev)
{
	global = (prev * 1468) % 467;
}
