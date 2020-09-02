#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char buffer[305];

	printf("Nothing much program. Type 'quit' to exit.\n\n\nWARNING: gets() implementation. DO NOT INPUT MORE THAN 300 CHARS\n");

	while (strcmp(buffer, "quit"))
	{
		gets(buffer);
	}

	return 0;
}