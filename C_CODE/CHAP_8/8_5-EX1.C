#include <stdio.h>
#include <math.h>

int main(void)
{
	int i;

	for(i = 2; i<101; i++)
	{
		printf("%-10d %-10lu %-10lu\n", i, (unsigned long int)pow(i, 2), (unsigned long int)pow(i, 3));
	}

	return 0;
}