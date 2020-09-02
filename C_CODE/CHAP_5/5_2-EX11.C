#include <stdio.h>
#include <string.h>

int main(void)
{
	char text[100];
	int i;

	printf("sdrawkcaB. Enter a string and I'll turn it backwards like that. [MAX 100 chars]\n\n");
	gets(text);

	printf("\n");
	/*for(i = strlen(text)-1; i > -1; i--)
	{
		printf("%c", text[i]);
	} */

	for (i = 0; i< 100; i++)
	{
		printf("%c", text[i]);
	}

	return 0;
}