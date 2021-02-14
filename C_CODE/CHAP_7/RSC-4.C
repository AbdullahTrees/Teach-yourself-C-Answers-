#include <stdio.h>

int main(void)
{
	float var, *fp;

	fp = &var;

	*fp = 121.03;
	printf("%f, %f", *fp, var);

	return 0;
}