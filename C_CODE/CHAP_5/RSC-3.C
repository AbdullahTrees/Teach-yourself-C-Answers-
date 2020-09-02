#include <stdio.h>

int main(void)
{
	long int longnum;
	short int shortnum;
	double doublenum;

	printf("\nGib looong number. ");
	scanf("%ld", &longnum);
	printf("\n%ld", longnum);

	printf("\nGib short number. ");
	scanf("%hd", &shortnum);
	printf("\n%hd", shortnum);

	printf("\nGib double number. ");
	scanf("%lf", &doublenum);
	printf("\n%lf", doublenum);

	return 0;
}