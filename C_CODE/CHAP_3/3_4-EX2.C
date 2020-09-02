#include <stdio.h>
#include <conio.h>

int main(void)
{
	char ch;

	printf("Enter the coded message. It will be decoded. \n> ");

	ch = getche();

	while (ch != '\r')
	{
		printf("\b%c", ch-1);
		ch = getche();
	}

	return 0;
}