#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	printf("cmd-line program that takes in 2 arguments and compares them lexicographically(strcmp()). \n\n");
	if (argc == 3)
	{
		int a = strcmp(argv[1], argv[2]);
		if (!a)
			printf("Both arguments are equal!");
		else
		{
			if (a > 0)
				printf("The first argument is greater than the second!");
			else
				printf("The second argument is greater than the first!");
		}
	}
	else
	{
		printf("Sorry, this is a cmd-line program. Please execute this program with the correct number of arguments and try again.");
		return argc;
	}

	return 0;
}