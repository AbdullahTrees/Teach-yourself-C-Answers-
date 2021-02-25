#include <stdio.h>
#include <conio.h>

int main(void)
{
	while (!kbhit())
		putchar('.');

	return 0;
}