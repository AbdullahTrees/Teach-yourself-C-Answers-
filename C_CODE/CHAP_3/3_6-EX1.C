#include <stdio.h>
#include <math.h>

int main(void)
{
	int i, test, is_prime;

	/*scanf("%d", &i);          loop tester*/
	for(i=2; i<1000; i++)
	{
		is_prime=1;
		for(test=2; test <= sqrt(i); test++)
		{
			if (!(i%test))  /*Efficiency time: We are actually calculating i/test, and trying to figure out whether i is prime or not. If i is prime, it won't have a single multiple, so i/test will never have a remainder thats 0 (i.e false). So i%test is always true for a prime number. Hence we use !(i%test) to make it more efficient, as a comparison against 0 is more taxing */
			{
				is_prime = 0;
				break;
			}
		}

		if (is_prime)  /*Efficiency time: is_prime is simply 1(true) or 0(false). The if condition is therefore true if is_prime is 1, so there's no need to use a comparison, saving CPU time... */
		{
			printf("%d is prime!!!\n", i);
		}
	}

	return 0;
}