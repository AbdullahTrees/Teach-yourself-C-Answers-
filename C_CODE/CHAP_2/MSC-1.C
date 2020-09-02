/* All hail the magic number program, one of the hardest challenges
in Mastery Skills Check Chapter 2 */

#include <stdio.h>

int magicnumber = 299;

int main(void)
{
	int i, guess;

	printf("Try and guess what number I'm thinking of, ok? \n\n ");
	scanf("%d", &i);

	for (i=1; i<11; i++)
	{
		printf("So... Guess #%d, what do you think the number is? \n", i);
		printf("> "); scanf("%d", &guess);

		if (guess == magicnumber)
		{
			printf("RIGHT! You got it! That really is the number I was thinking of! Great job!\n");
			return 0;
		}
		else
		{
			if (i == 10)
			{
				printf("STOP! I can clearly see that you'll never be able to guess the magic number! It is futile to continue further. Why don't we stop for now? \n");
			}
			else
			{
				if (guess > magicnumber)
				{
					printf("Hmm, that number is higher than what I was thinking of, do try again... \n\n");
				}
				else
				{
					printf("Hmm, that number is lower than what I was thinking of, do try again... \n\n");
				}
			}
		}
	}

	return 0;
}