#include <stdio.h>
#include <conio.h>

int main(void)
{
	int i;
	char ch;
	char oldch='z';

	printf("Type 10 letters(A-Z/a-z) and this program will identify the one with the smallest ASCII value (no spaces, don't press enter) \n");

	for (i=0;i<11;i++)
	{
		ch = getche();

		if (ch<oldch && ch>64)
			oldch = ch;
	}

	printf("\nThe smallest letter typed is %c, which had a value of %d.", oldch, oldch);
	return 0;
}