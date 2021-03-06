#include <stdio.h>
#include <ctype.h>
#include <string.h>

void string_up(char *cp);

int main(int argc, char *argv[])
{
	printf("Interactive/cmd-line program that TURNS EVERYTHING INTO UPPER CASE: \n");

	if(argc > 1) // arguments received
	{
		char argcopy[strlen(argv[1]) + 3];
		int i;

		for(i = 0; argv[1][i]; i++)
			argcopy[i] = argv[1][i];

		string_up(argcopy);
		printf("Input String: %s\nOutput String: %s", argv[1], argcopy);

		return 0;
	}
	else // arguments not received, hence program will be interactive
	{
		char str[500];

		printf("Arguments not received, program will continue...\n");
		printf("WARNING: gets() implementation. DO NOT EXCEED 500 CHARS\n");
		printf("Enter a string: ");

		gets(str);

		string_up(str);
		printf("Output String: %s", str);

		return 0;
	}
}

void string_up(char *cp)
{
	for(; *cp; cp++)
		*cp = toupper(*cp);
}
