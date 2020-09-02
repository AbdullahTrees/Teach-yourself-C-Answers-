#include <stdio.h>

int main(void)
{
	unsigned long int distance;

	printf("Enter a distance(km) and I'll tell you how long it takes light to get there: ");
	scanf("%lu", &distance);

	printf("\nLight will take approximately %lu seconds to travel that distance. ", distance/299792);
	return 0;
}