#include <stdio.h>

int main(void)
{
	char ch;

	printf("Temporary notepad: Press Enter to exit. \n");

	while (ch != '\r')
	{
		ch = getche();
	}

	return 0;
}