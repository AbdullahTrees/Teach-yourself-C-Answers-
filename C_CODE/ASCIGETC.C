#include <stdio.h>
#include <conio.h>

int main(void)
{
	char ch;

	printf("Press a letter on your keyboard to know its ASCII value, and getche() output");
	while (1)
	{
		ch = getche();
		printf("\b ");

		printf("\ngetche() thinks you pressed \'%c\' and it has an ASCII value of %d", ch, ch);
	}
}
