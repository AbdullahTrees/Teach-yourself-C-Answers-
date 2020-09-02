/* This looks like the hardest exercise I've done yet... Expecting many debugging */

#include <stdio.h>

int main(void)
{
	int num;
	int i;

	printf("Factor Finder: Lists all factors of a given number. Limitation: 0-32767. ");
	printf("\nEnter  the number: ");
	scanf("%d", &num);

	printf("Factors found: ");

	for (i=2; i<=(num/2); i++)
	{
		if ((num%i) == 0)
		{
			printf(" %d, ", i);
		}
	}

	return 0;
}