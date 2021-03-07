#include <stdio.h>
#include <math.h>

int main(void)
{
	int k, n;
	char is_prime, pos_on_column = 1;

	for(k = 2; k < 1000; k++)
	{
		is_prime = 1;
		for(n = 2; n < (int)(sqrt(k) + 1); n++)
		{
			if (k % n == 0)
			{
				is_prime = 0;
				break;
			}
		}

		if (is_prime)
		{
			printf("%-6d", k);
			pos_on_column++;
			if (pos_on_column > 4)
			{
				putchar('\n');
				pos_on_column = 1;
			}
		}
	}

	return 0;
}