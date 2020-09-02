#include <stdio.h>

int main(void)
{
	float var1;
	float var2;
	float var3;

	printf("Enter a floating point number: ");
	scanf("%f", &var1);

	printf("Enter one moar floating point number pls; ");
	scanf("%f", &var2);

	var3 = var1 + var2;
	printf("The sum of the two numbers you provided is %f", var3);

	return 0;
}