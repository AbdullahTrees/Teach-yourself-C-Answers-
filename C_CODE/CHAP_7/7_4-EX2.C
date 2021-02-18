#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	printf("cmd-line program that takes two numbers as arguments and adds them together...");

	if (argc == 3)
	{
		long int a = atoi(argv[1]);
		long int b = atoi(argv[2]);

		if (a+b)
			printf("\nThe sum of those two numbers is %ld", a+b);
		else
			printf("\nSum is 0. Are you sure you typed in two numerical(0-9) numbers?");
	}
	else
	{
		printf("\nSorry, this is a cmd-line program. Please execute this program from command prompt with the correct number of arguments.");
		return 1;
	}

	return 0;
}