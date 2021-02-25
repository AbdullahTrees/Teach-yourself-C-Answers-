#include <stdio.h>

int main(void)
{
	char ch;
	do
	{
		ch = getchar();
		if (ch == EOF)
		{
			printf("Catastrophic error! getchar() has failed...");
			return 255;
		}

		if (putchar('.') == EOF)
		{
			printf("Catastrophic error! putchar() has failed...");
			return 255;
		}
	}
	while (ch != '\n');

	return 0;
}