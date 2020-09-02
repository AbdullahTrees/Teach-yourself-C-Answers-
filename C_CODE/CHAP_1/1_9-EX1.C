#include <stdio.h>

void outnum(int a);

int main(void)
{
	int input;

	printf("I am a very helpful program. pls gib a number. ");
	scanf("%d", &input);

	outnum(input);

	return 0;
}

void outnum(int a)
{
	printf("The number you just typed in is %d. Am I not helpful as heck!!?? ", a);
}