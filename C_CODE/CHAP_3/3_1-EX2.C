#include <stdio.h>

int main(void)
{
	int i;
	char ch;

	for (i=0;i<256;i++)
	{
		ch = i;
		printf("%c - %d,\t", ch, i);
	}
	return 0;
}