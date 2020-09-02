#include <stdio.h>
#include <conio.h>

int main(void)
{
	char numbers[10][10] = {
										"Zero",
										"One",
										"Two",
										"Three",
										"Four",
										"Five",
										"Six",
										"Seven",
										"Eight",
										"Nine",
								  };

	char input, comparator;

	printf("Enter a number (Q to exit):  ");

	while (1)
	{
		input = getche();

		if (input == 'q' || input == 'Q')
			break;

		if (input < '0' || input > '9')
		{
			printf("\nEnter a number: ");
			continue;

		}
		for (comparator = '0'; comparator < 59; comparator++)
		{
			if (input == comparator)
			{
				printf("\t%s\n", numbers[input - '0']);
				break;
			}
		}
	}

	return 0;
}