#include <stdio.h>

int main(void)
{
	int num[9], i, j, alreadymentioned;

	printf("Array duplicate finder. Please enter 10 numbers, seperated by Enter key: \n");

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);
	}
	printf("\n");

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (num[i] == num [j] && i != j)
			{
				printf("#%d is a duplicate with #%d.\n", i+1, j+1);
			}
		}
	}

	return 0;
}