#include <stdio.h>

int main(void)
{
	char str[50];
	double db;
	int a, strcount, dbcount, acount;

	printf("Enter a string: ");
	scanf("%50s%n", str, &strcount);

	printf("Enter a floating point value: ");
	scanf("%lf%n", &db, &dbcount);

	printf("Enter an integer: ");
	scanf("%d%n", &a, &acount);

	printf("\nInput received and No. of chars per input\n%s -- %d\n%lf -- %d\n%d -- %d", str, strcount, db, dbcount, a, acount);

	return 0;
}