#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(void)
{
	char inputstr[505], bigstr[1505] = "";
	int i;

	printf("String concatenator. [Max 500 chars] Type \"quit\" to exit. \n");

	while (1)
	{
		/*  Input segment  */
		for (i=0; i<501; i++)    // I could've just used gets()  but I'm trying to acquire the 'crashophobia' that many good programmers have.
		{
			inputstr[i] = getche();

			if (inputstr[i] == '\r') // 'Enter' key is not treated as a newline in arrays, this has to be accomodated for
			{
				inputstr[i] = '\n';
				inputstr[i+1] = '\0';
				printf("\n");
				break;
			}

			/*if (inputstr[i] == '\b')  // Implementation of modern backspacing
			{                            // This is too complex... maybe someone who has more time can do this later
				inputstr[i] = '\0';
				if (i > 1)
				{
					inputstr[i-1] = '\0';
					i = i - 2;
				}
				printf(" \b");
			} */

			if (i == 499) //Prevent overrunning the array inputstr
			{
				printf("\nWARNING. Maximum limit reached... Concatenating.\n");
				inputstr[i] = '\n';
				inputstr[i+1] = '\0';
				break;
			}
		}

		/* Check for "quit"  */
		if (strcmp(inputstr, "quit\n") == 0)
		{
			printf("Closing program. \n");
			printf("Concatenated 'bigstr' == \n\n%s", bigstr);
			//printf(" \n\nDEBUG  'inputstr' == %s", inputstr);
			return 0;
		}

		/*  Concatenate & conditions  */
		if (strlen(bigstr) + strlen(inputstr) < 1498)
		{
			strcat(bigstr, inputstr);
			printf("Concatenated.\n");
		}
		else
		{
			printf("The string 'bigstr' is being overrun... Program Aborted.\n");
			printf("Concatenated 'bigstr' == \n\n%s", bigstr);
			//printf(" \n\nDEBUG  'inputstr' == %s", inputstr);
			return 0;
		}
	}
}