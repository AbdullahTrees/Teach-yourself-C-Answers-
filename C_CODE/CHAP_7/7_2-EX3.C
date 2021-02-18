#include <stdio.h>

void displayptr(char *ptr);

int main(void)
{
	char *a = "The quick brown fox ran and jumped over the lazy programmer";

	printf("Recursive Display string function test: ");
	displaystr(a);

	return 0;
}

void displaystr(char *ptr)
{
	if(*ptr)
	{
		printf("%c", *ptr)
		ptr++;
		displaystr(ptr);
	}
	else
		return;
}