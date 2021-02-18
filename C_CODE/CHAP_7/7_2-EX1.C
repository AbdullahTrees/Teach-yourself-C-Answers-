#include <stdio.h>

unsigned long long int factorial(unsigned long long int i);

int main(void)
{
	int n;

	printf("Factorial calculator(Function Recursion Test). Enter a number: ");
	scanf("%d", &n);

	printf("The factorial of %d is %llu.", n, factorial(n));

	printf("\nunsigned long long int size: %d", sizeof(unsigned long long int));

	return 0;

}

unsigned long long int factorial(unsigned long long int i)
{
	if (i == 0)
		return 1;
	else
		return i * factorial(i-1);
}