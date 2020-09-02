#include <stdio.h>

int main(void)
{
	int choice;

	printf("Do you want to...  ");
	printf("1. Add two numbers  2. Subtract two numbers ");
	scanf("%d", &choice);

	if (choice == 1)
	{
		int a, b;

		printf("Enter the first number. ");
		scanf("%d", &a);

		printf("Enter the second number. ");
		scanf("%d", &b);

		printf("The sum of these two numbers is %d. ", a+b);
	}
	else
	{
		if (choice == 2)
		{
			int a, b;

			printf("Enter the first number. ");
			scanf("%d", &a);

			printf("Enter the second number. ");
			scanf("%d", &b);

			printf("The difference of these two numbers is %d. ", a-b);
		}
		else
		{
			printf("Please enter a correct number and try again.");
		}
	}

	return 0;
}