#include <stdio.h>

void prompts(char *msg, char *str);

int main(void)
{
	char str[500];
	prompts("Enter a string: ", str);

	printf("Your string is: %s", str);
	return 0;
}

void prompts(char *msg, char *str)
{
	printf("WARNING: gets() implementation, do not enter more than 500 characters...\n");
	printf(msg);
	gets(str);
	return;
}