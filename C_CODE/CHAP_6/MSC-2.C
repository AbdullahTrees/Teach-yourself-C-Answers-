#include <stdio.h>

int main(void)
{
	char *a, ka;
	// Assign ka the value 5, but indirectly..

	a = &ka;

	*a = 5;

	printf("%d %d", *a, ka);

	return 0;
}