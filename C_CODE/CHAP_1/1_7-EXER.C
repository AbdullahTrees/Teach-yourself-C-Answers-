#include <stdio.h>

void textfunc(void);

int main(void)
{
	printf("The summer soldier, ");
	textfunc();

	return 0;
}

void textfunc(void)
{
	printf("the sunshine patriot. ");
}