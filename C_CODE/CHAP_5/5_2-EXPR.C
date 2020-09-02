#include <stdio.h>
#include <conio.h>

int main(void)
{
	char bigstr[1550];
	int i;
	char ch;

	//input
	printf("Enter a message. [Max 1500 chars]: \n");
	for (i = 0; i < 1500; i++)
	{
		ch = getche();
		bigstr[i] = ch;
	}

	//output
	printf("\n\n")
	for (i = 0; str[i]; i++)
	{
		printf("%c", bigstr[i]);
	}

	return 0;
}