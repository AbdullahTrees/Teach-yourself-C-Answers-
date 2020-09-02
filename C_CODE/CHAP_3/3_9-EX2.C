/*Welcome to a very difficult challenge from the book: Letter/Number counter!*/
#include <stdio.h>
#include <conio.h>

int main(void)
{
	char ch;
	int l=0, p=0, d=0, spaces=0;

	printf("\nEnter a passage. This program will count the number of letters, punctuation marks and digits present in the passage. Press Enter to finish: \n\n");

	do
	{
		ch = getche();

		switch (ch)
		{
			case 'a': case 'b': case 'c': case 'd': case 'e': case 'f': case 'g': case 'h': case 'i': case 'j': case 'k': case 'l': case 'm': case 'n': case 'o': case 'p': case 'q': case 'r': case 's': case 't': case 'u': case 'v': case 'w': case 'x': case 'y': case 'z':
			case 'A': case 'B': case 'C': case 'D': case 'E': case 'F': case 'G': case 'H': case 'I': case 'J': case 'K': case 'L': case 'M': case 'N': case 'O': case 'P': case 'Q': case 'R': case 'S': case 'T': case 'U': case 'V': case 'W': case 'X': case 'Y': case 'Z':
				l++;
				break;
			case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9': case '0':
				d++;
				break;
			case '.': case ',': case '\'': case '\"': case ':': case '!':
				p++;
				break;
			case ' ':
				spaces++;
				break;
		}

	}
	while (ch != '\r');

	printf("\n\nTotal characters: %d\nLetters: %d     Punctuation Marks: %d     Numerals: %d\n", l+p+d+spaces, l, p, d);

	return 10;
}