#include <stdio.h>

int main(void)
{
	char input[500], *current;

	printf("WARNING: gets() implementation... DO NOT ENTER MORE THAN 500 CHARS\n");
	printf("Program that returns the rest of the string after the first string.\n"
			 "Enter a string: ");

	gets(input);

	for (current = input; *current; current++)
	{
		if (*current == ' ')
		{
			for (; *current; current++)
				printf("%c", *current);
		}
	}

	return 0;
}