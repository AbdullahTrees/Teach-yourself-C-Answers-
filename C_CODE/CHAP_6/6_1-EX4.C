#include <stdio.h>

int main(void)
{
	int p, *q;

	q = &p;

	for (p=0; p<10; p++)
		printf("%d\t", *q);


	return 0;
}