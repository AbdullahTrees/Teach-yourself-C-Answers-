#include <stdio.h>

int main(void)
{
	int i;

	printf("Printing all numbers divisible by 17...  ");

	for (i=17 ; i<100 ; i++)
	{
		if ((i % 17) == 0)
			printf("%d ", i);
	}

	printf("Terminating...  ");
	return 0;
}