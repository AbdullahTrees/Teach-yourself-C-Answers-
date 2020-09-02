#include <stdio.h>

int main(void)
{
	int i;

	for (i=1; i<99; i=i+5)
	{
		printf("%d,\t%d,\t%d,\t%d,\t%d \n", i, i+1, i+2, i+3, i+4, i+5);
	}

	return 0;
}
