#include <stdio.h>
#include <string.h>
#include <stdlib.h>  // required for malloc();


int main(int argc, char *argv[])
{
	printf("cmd-line program that encodes a string: \n");

	if (argc == 1)
	{
		printf("Wrong usage! Usage: %s \"desired string\"", argv[0]);
		return 1;
	}
	else
	{
		int c;
		// char strstore[strlen(argv[1]) + 3];  // Works on C11
		char *strstore;

		strstore = malloc(strlen(argv[1]) + 5);  // Above variable-length array declaration is an error on C89, giving 'Constant expression required'
		if (strstore == NULL)
		{
			printf("ERROR: Memory allocation failed! Program aborted!");
			return 255;
		}

		for(c = 0; *(argv[1] + c); c++)
		{
			strstore[c] = *(argv[1] + c);
			strstore[c]++;
		}
		printf("\nOriginal String: %s\nCoded String: %s", argv[1], strstore);

		return 0;
	}
}
