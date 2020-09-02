#include <stdio.h>
#include <conio.h>

int main(void)
{
	int i;
	char ch;

	for(i=1; i<11; i++)
	{
		printf("\nEnter a letter: ");
		ch = getche();
		while(ch!=0)
		{
			printf(".");
			ch--;
		}
	}

	return 404;
}