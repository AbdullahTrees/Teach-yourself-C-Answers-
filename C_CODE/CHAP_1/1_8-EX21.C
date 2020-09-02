#include <stdio.h>

float convert(void);

int main(void)
{
	printf("That many dollars is %f pounds.", convert());

	return 0;
}

float convert(void)
{
	float dollars;

	printf("Convert what amount of dollars to pounds? ");
	scanf("%f", &dollars);

	return 2.0*dollars;

}