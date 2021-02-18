#include <stdio.h>
#include <string.h>

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
		char strstore[strlen(argv[1]) + 3];

		for(c = 0; *(argv[1] + c); c++)
		{
			strstore[c] = *(argv[1] + c);
			strstore[c]++;
		}
		printf("\nOriginal String: %s\nCoded String: %s", argv[1], strstore);

		return 0;
	}
}
