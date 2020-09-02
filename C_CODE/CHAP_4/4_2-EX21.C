#include <stdio.h>

float soundspeed(unsigned long d);

int main(void)
{
	unsigned long distance;

	printf("\nGib distance(feet) and I'll tell you how long it takes for sound to travel that distance: ");
	scanf("%lu", &distance);

	printf("\nIt takes sound %g seconds to travel that distance. ", soundspeed(distance));

	return 0;
}

float soundspeed(unsigned long d)
{
	return d / 1129.0;
}