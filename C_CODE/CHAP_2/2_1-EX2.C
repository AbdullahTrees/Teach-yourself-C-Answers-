#include <stdio.h>

int main(void)
{
	int integer_input;

	printf("Determining number parity. Enter an integer");
	scanf("%d", &integer_input);

	if(integer_input % 2 == 0)
		printf("This number is even. ");

	if(integer_input % 2 == 1)
		printf("This number is odd. ");

	return 0;
}