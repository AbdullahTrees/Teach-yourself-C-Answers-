#include <stdio.h>

int main(void)
{
	int sqr;

	sqr = get_sqr();
	printf("Square: %d", sqr);

	return 0;
}

int get_sqr(void);

int get_sqr(void)
{
	int num;

	printf("Enter a number: ");
	scanf("%d", &num);
	return num*num; /* squares the number and then exits the function to return to main, exiting with the square */
}