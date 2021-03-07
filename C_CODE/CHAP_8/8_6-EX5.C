#include <stdio.h>

int main(void)
{
	unsigned long long int hexa;

	printf("Hexadecimal(capital) to decimal/octal converter! Enter a hexadecimal number only (like A2): ");
	scanf("%llx", &hexa);

	printf("Decimal representation: %llu\nOctal representation %llo", hexa, hexa);

	return 0;
}