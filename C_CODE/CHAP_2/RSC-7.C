#include <stdio.h>

int square_da_ting(int i);

int main(void)
{
	int integer_input;
	int answer;

	printf("Hello! I am the Number Squarer! Gimme number! ");
	scanf("%d", &integer_input);

	answer = square_da_ting(integer_input);

	printf("I'm done! The answer is %d! That was too easy...", answer);

	return 0;
}

int square_da_ting(int i)
{
	return i*i;
}