#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(void)
{
	char inputstr[505], bigstr[1505];

	int i;

	/* Startup */
	for (i=0; i<1505; i++)
		bigstr[i] = '\0';


	printf("String concatenator. [Max 500 chars] Type \"quit\" to exit. \n");

	while (1)
	{
		/*  Input segment  */
		for (i=0; i<501; i++)    // I could've just used gets()  but I'm trying to acquire the 'crashophobia' that many good programmers have.
		{
			inputstr[i] = getche();

			if (inputstr[i] == '\r')
			{
				inputstr[i] = '\n';
				inputstr[i+1] = '\0';
				printf("\n");
				break;
			}
			if (i == 499)
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
			goto cleanup_and_exit;
			//return 0;
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
			goto cleanup_and_exit;
			//return 0;
		}
	}

	cleanup_and_exit:
	{
		for (i=0; i<1505; i++)   //Apparently MSDOS/TC++ compiler does not do cleanup of previously allocated resources. While in other cases this may be something to worry about as it is a possible way for unintended information to leak outside a program (vulnerability), in this case any unintended garbage data can mess up the strlen comparison test and so it is being filled with NULL bytes here.
			bigstr[i] = '\0';
		return 0;
	}
}