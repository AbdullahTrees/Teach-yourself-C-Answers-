#include <stdio.h>

int main(void)
{
	int i, j, k;

	printf("Dividing two numbers... \n");
	for (k=0; k<10; k++)
	{
		printf("Enter first number: ");
		scanf("%d", &i);

		printf(" Enter second number: ");
		scanf("%d", &j);

		if (!j)
			printf(" Cannot divide by zero. Please try again. \n");
		else
			printf("%d\n", i/j);
	}

	return 0;
}