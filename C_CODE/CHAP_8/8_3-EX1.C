#include <stdio.h>
#include <conio.h>

int main(void)
{
	char ch = 0;

	printf("Hola! Enter a string and you will see ASCII values. Press enter to exit: ");

	while(ch != '\r')
	{
		ch = getch();
		printf("%d ", ch);
	}

	return 0;
}