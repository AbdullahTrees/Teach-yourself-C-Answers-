#include <stdio.h>
#include <conio.h>
#include <string.h>

char magicword[25] = "Pterodactyl";

int main(void)
{
	int tries = 0, i;		//  Variables
	char ch;

	int win = 0, correct_guess;		//  Flags

	char gamestate[25] = "";

	for (i=0; magicword[i]; i++)
		gamestate[i] = '-';

	printf("Hangman!!!\n\n");
	sleep(2);


	while (win != 1 && tries <= 15)
	{
		printf("\nCurrently, \t\t %s\t", gamestate);
		printf("Tries: %d\nEnter the letter: ", tries);

		ch = getche();
		//printf("\b ");

		for (i=0, correct_guess=0; magicword[i]; i++) // testing entire array for all matches to one letter
		{
			if (ch == magicword[i] && ch != gamestate[i])
			{
				gamestate[i] = magicword[i];
				correct_guess++;
				continue;
			}

			if (ch == gamestate[i])
			{
				printf("\nHey, that letter is already present!\n");
				correct_guess = -1;
				break;
			}
		}

		if (correct_guess == -1)
			continue;
		else
		{
			if (correct_guess > 0)
			{
				printf("\nHey! That was correct! Not bad, haha!\n");
				tries++;
				if (strcmp(magicword, gamestate) == 0)
					win = 1;
				continue;
			}
			else
			{
				//if
				printf("\nSorry, that was the wrong guess, try again!\n");
				tries++;
				continue;
			}
		}


	}

	if (win)
	{
		printf("\n\n\nYOU WIN!!!");
		sleep(2);
		return 0;
	}

	if (tries == 16)
	{
		printf("\n\n\nAhhh, you ran out of tries! You loooosee!");
		sleep(2);
	}
	return 0;
}