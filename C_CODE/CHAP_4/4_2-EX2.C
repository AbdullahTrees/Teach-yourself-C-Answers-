#include <stdio.h>

float soundspeed(void);

float time;
unsigned long dist;

int main(void)
{
	printf("\nGib distance(feet) and I'll tell you how long it takes for sound to travel that distance: ");
	scanf("%lu", &dist);

	soundspeed();

	printf("\nIt takes sound %g seconds to travel that distance. ", time);

	return 0;
}

float soundspeed(void)
{
	time = dist / 1129.0;

	return time;
}
