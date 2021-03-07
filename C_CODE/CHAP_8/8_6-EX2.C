#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char floaty[30];

	printf("Enter a floating point number: ");
	scanf("%[0-9.]", floaty);

	printf("The number you entered was: %lf", atof(floaty));

	return 0;
}
