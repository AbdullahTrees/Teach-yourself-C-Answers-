#include <stdio.h>

int main(void)
{
	char str[80];
	int string_end;

	printf("Enter a string [LESS THAN 80 chars]\n");
	gets(str);

	for (string_end = 0; ; string_end++)
	{
		if (str[string_end] == 0)
		{
			for (; string_end < 80; string_end++)
				str[string_end] = '.';

			break;
		}
	}

	printf("\n%s", str);

	return 0;
}