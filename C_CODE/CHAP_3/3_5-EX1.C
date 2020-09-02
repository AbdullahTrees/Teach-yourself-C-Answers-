#include <stdio.h>
#include <conio.h>

int main(void)
{
	float gallon;

	printf("\nThis program converts (US) gallons to liters. Enter number of gallons to convert or 0 to exit. ");

	do
	{
		scanf("%f", &gallon);
		if (gallon != 0.0)
		{
			printf("\n%f gallons is %f liters.\n", gallon, gallon * 3.7854);
			printf("Enter number of gallons: ");
		}
	}
	while (gallon != 0.0)

	return 0;
}
