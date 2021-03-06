#include <stdio.h>
#include <conio.h>
#include <string.h>

#define pwsize 80

void censored_input(char input[]);

int main(void)
{
	 char pw_server[pwsize] = "Tristan", pw_client[pwsize] = "";
	 int tries = 3;

	 printf("Impertigo Developer Controls\nPlease enter your credentials\nUsername: topkekasheck\n");

	 while (tries > 0)
	 {
		censored_input(pw_client);

		if (strcmp(pw_client, pw_server) == 0)
		{
			printf("\nLog-on Successful! Connecting you to the server...");
			return 0;
		}
		else
		{
			tries--;
			if (tries != 0)
				printf("\nWrong password! Please try again... Attempts left: %d\n", tries);
		}
	 }

	 printf("\nAccess Denied!!! Please try again later...");
	 return 0;
}

void censored_input(char input[])
{
	 signed int i;
	 char ch;

	 printf("Enter your password: ");

	 for (i=0; i<pwsize; i++)
	 {
		  ch = getch();

		  if (ch == '\r')
		  {
				input[i] = '\0';
				return;
		  }

		  if (ch == '\b')
		  {
				if (i == 0)
				{
					 i--;
					 continue;
				}
				else
					 i = i - 2;
				printf("\b \b");
				continue;
		  }

		  printf("*");
		  input[i] = ch;
	 }
}
