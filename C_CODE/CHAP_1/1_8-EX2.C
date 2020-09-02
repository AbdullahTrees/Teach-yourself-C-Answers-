#include <stdio.h>

float convert(void);

float dollars;

int main(void)
{
	float pounds;

	printf("Hello I will convert dollars($) to pounds(). Gimme! ");
	scanf("%f", &dollars);

	pounds = convert();

	printf("That many dollars is %f pounds. Bye!", pounds);

	return 0;

}

float convert(void)
{
	return 2.0 * dollars;
}
