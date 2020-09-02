/* Da legendary Prime Number Tester from da book */

#include <stdio.h>

int main(void)
{
	int num;
	int i;
	int is_prime;

	printf("Prime Number checker. Limitation: 0-32767. Enter the number to test: ");
	scanf("%d", &num);

	/* Now testing for factors */
	is_prime = 1;
	for (i=2; i <= num/2; i=i+1)
	{
		if((num%i) == 0)
			is_prime=0;
	}

	if (is_prime == 1)
		printf("The number is prime. ");
	else
		printf("The number is not prime. ");

	return 0;
}