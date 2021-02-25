#include <stdio.h>

void recursive(char ch);

int main(void)
{
	char ch, loopstopper = 'k';

	printf("Press e to exit.\n");

	do
	{
		ch = 'A';
		recursive(ch);
		ch = 'a';
		recursive(ch);
		loopstopper = getch();
	}
	while(loopstopper != 'e' && loopstopper != 'E');

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
