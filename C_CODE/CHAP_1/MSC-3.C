#include <stdio.h>

float o_to_c(float ounces);

int main(void)
{
	float input;

	printf("Hello! I am a little application that converts Ounces to Cups!");
	printf("Gimme the number of ounces... ");
	scanf("%f", &input);

	printf("There are %f cups in that many ounces", o_to_c(input) );

	return 0;
}

float o_to_c(float ounces)
{
	return ounces/8.0;
}