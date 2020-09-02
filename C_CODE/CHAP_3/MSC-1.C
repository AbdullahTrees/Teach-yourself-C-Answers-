#include <stdio.h>

int main(void)
{
	char ch;

	printf("Whatever you type will have its cases switched. Press Enter to exit. \n");
	ch = getche();

	while (ch != '\r')
	{
		if ((ch >= 97) && (ch <= 122))
		{
			printf("\b%c", ch-32);
			ch = getche();
			continue;
		}
		if ((ch >= 65) && (ch <= 90))
		{
			printf("\b%c", ch+32);
			ch = getche();
			continue;
		}
		if (ch == '\b')
		{
			printf(" \b");
			ch = getche();
			continue;
		}

		printf("\b%c", ch);
		ch = getche();
	}

	return 0;
}