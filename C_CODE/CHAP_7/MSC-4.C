#include <stdio.h>

void recursive(char ch);

int main(void)
{
	char ch = 'A';

	recursive(ch);

	return 0;
}

void recursive(char ch)
{
	if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
	{
		printf("%c\t", ch);
		recursive(ch + 1);
	}
}
