#include <stdio.h>

int main(void)
{
	char str[80], *ptemp;
	int spaces;

	printf("Enter a string: ");
	gets(str);

	spaces = 0;
	for(ptemp=str; *ptemp; ptemp++)
	{
		if(*ptemp == ' ')
			spaces++;
	}

	printf("Number of spaces: %d", spaces);

	return 0;
}