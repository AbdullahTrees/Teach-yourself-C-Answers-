#include <stdio.h>
#include <conio.h>

int main(void)
{
	char ch;

	printf("Detecting tabs, backspaces and newlines. Press q to exit...\n\n");

	do
	{
		ch = getche();

		switch (ch)
		{
			case '\t':
			{
				printf("Tab\n"); break;
			}
			case '\r':
			{
				printf("Newline\n"); break;
			}
			case '\b':
			{
				printf("Backspace\n"); break;
			}
		}
	}
	while (ch != 'q');

	return 0;
}