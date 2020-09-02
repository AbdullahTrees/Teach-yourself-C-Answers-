#include <stdio.h>
#include <string.h>

int main(void)
{
	char dictionary[][2][200] = {
											"apple", "an edible fruit. It is delicious.",
											"dinosaur", "an extinct species of reptiles that once roamed the earth.",
											"laptop", "a portable personal computer that includes battery, keyboard, mousepad and a screen.",
											"kek", "korean famous acronym for lol, originating from League of Legends.",
											"fascinating", "an interesting, captivating matter.",
											"melancholy", "droopy, or depressing; boring.",
											"reconnoiter", "performing intelligence operations such as spying, logistic-measuring, etc. without the use of force/violence"
										 };
	char input[35];

	int i;

	printf("WARNING: gets() implementation... DO NOT INPUT MORE THAN 30 CHARS\n");
	printf("Electronic dictionary (like we don't have enough of those...) Enter a word: ");

	gets(input);

	for(i=0; ; i++)
	{
		if (!strcmp(dictionary[i][0], input))
		{
			printf("\n%s\n%s", dictionary[i][0], dictionary[i][1]);
			return 0;
		}

		if (dictionary[i][0][0] == '\0')
		{
			printf("Word not found! Please use all small letters, or use a better dictionary, this one has like 10 words anyway...");
			return 0;
		}
	}


}