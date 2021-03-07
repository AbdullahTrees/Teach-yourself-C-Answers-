#include <stdio.h>

#define COUNT 100

int main(void)
{
	int i;

	for (i = 0; i < COUNT; i++)
		printf("%-8d", i);

	return 0;
}