#include <stdio.h>

int main(void)
{
	char str[500] = "", str2[500] = "";
	int i, j, k, size_i;

	printf("String \"character-by-character\" alternator: Enter a string [MAX 500 chars]\n");
	gets(str);

	for (i=0; ; i++)     // end finder
	{
		if (str[i] == 0)   // string end found
		{
			size_i = i;
			i--; // beware, don't modify null char
			for (j=0, k=0; (j<=size_i/2 && i>=size_i/2) ;k=k+2, i--, j++)    // actual rearranging
			{
				str2[k] = str[j];
				str2[k+1] = str[i];
			}
			if (size_i%2 == 1)
			{
				str2[k-1] = '\0';
				printf("--DEBUG= size_i: %d| j: %d| i: %d| k: %d", size_i, j, i, k);
			}
			break;
		}
	}

	printf("\n%s", str2);

	return 0;
}