#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	printf("cmd-line program that takes two integers as arguments and adds/subtracts/multiplies/divides them together...");

	if (argc == 4)
	{
		long int a = atoi(argv[2]);
		long int b = atoi(argv[3]);

		if (strcmp("add", argv[1]) == 0)
		{
			if (a+b)
				printf("\nThe sum of those two numbers is %ld", a+b);
			else
				printf("\nSum is 0. Are you sure you typed in two numerical(0-9) numbers?");

			return 0;
		}
		if (strcmp("multiply", argv[1]) == 0)
		{
			if (a*b)
				printf("\nThe product of these two numbers is %ld", a*b);
			else
				printf("\nProduct is 0. Not what you expected? Are you sure you typed in two numerical(0-9) numbers?");

			return 0;
		}
		if (strcmp("subtract", argv[1]) == 0)
		{
			if (a-b)
				printf("\nThe difference of these two numbers is %ld", a-b);
			else
				printf("\nDifference is 0. Not what you expected? Are you sure you typed in two numerical(0-9) numbers?");

			return 0;
		}
		if (strcmp("divide", argv[1]) == 0)
		{
			if (b == 0)
			{
				printf("\n\nDivision error!!! Cannot divide by zero. Are you sure you typed in two numerical(0-9) numbers?");
				return 5;
			}
			else
			{
				if (((double)a)/((double)b) != 0.0)
					printf("\n%ld divided by %ld is %lf", a, b, ((double)a)/((double)b));
				else
					printf("\nResult is 0. Not what you expected? Are you sure you typed in two numerical(0-9) numbers?");

				return 0;
			}
		}

		printf("\n\nWrong argument(s). Usage is <operation> <number 1> <number 2>\nPossible operations are \"add\", \"subtract\", \"multiply\" or \"divide\".");
	}
	else
	{
		printf("\nSorry, this is a cmd-line program. Please execute this program from command prompt with the correct number of arguments. Usage is <operation> <number 1> <number 2>\nPossible operations are \"add\", \"subtract\", \"multiply\" or \"divide\".");
		return 1;
	}

	return 0;
}