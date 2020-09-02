#include <stdio.h>

int main(void)
{
	int a, b;
	char ch;

	printf("Do you want to:\n");
	printf("(A)dd, (S)ubtract, (M)ultiply or (D)ivide? [A/S/M/D]\n");
	ch = getchar();
	printf("\n");

	printf("Enter first number: ");
	scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);

	if (ch=='A')
		printf("%d", a+b);
	else
	{
		if (ch=='S')
			printf("%d", a-b);
		if (ch=='M')
			printf("%d", a*b);
		if (ch=='D')
			printf("%d", a/b);
		else
			printf("Please enter a correct number and try again");
	}
	return 0;
}