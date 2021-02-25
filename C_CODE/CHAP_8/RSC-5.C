#include <stdio.h>

int main(void)
{
	char str[500];

	printf("WARNING: gets() implementation... Do not enter more than 500 chars!");
	printf("Recursive String length function test. Enter a string: ");
	gets(str);
	printf("Length of string is: %d", rstrlen(str));

	return 0;
}

int rstrlen(char *stringy_pingy)
{
	if (*stringy_pingy)
		return rstrlen(stringy_pingy + 1) + 1;
	else
		return 0;
}