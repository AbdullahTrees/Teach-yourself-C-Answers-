#include <stdio.h>

int main(void)
{
	int i;

	printf("Numbers from 1-10, their squares and their cubes... \n \n");
	printf("------------------------- \n");
	printf("|Number\t|Square\t|Cube\t|\n");
	printf("------------------------- \n");

	for (i=1; i<11; i++)
	{
		printf("|%d \t| %d \t| %d \t| \n", i, i*i, i*i*i);
	}

	printf("-------------------------");

	return 0;
}