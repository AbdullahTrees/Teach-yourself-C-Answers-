#include <stdio.h>

int main(void)
{
	char firstname[40];
	int birthdate[3];
	char phonenumber[80];

	printf("Please enter your first name: ");
	scanf("%38s", firstname);

	printf("Please enter your birth date(MM/DD/YY)[PS I hate putting the month first but sadly this is specifically mentioned in the question specifications... :( anyways...]: ");
	scanf("%2d/%2d/%2d", birthdate, (birthdate+1), (birthdate+2));

	printf("Please enter your telephone number. I promise I'm not a stalker... I am a smol littel MSDOS program incapable of stealing your personal information and releasing it to everyone on the internet, I promise...: ");
	// fflush() [defined in stdio.h]: a function that clears the buffer of whatever file stream it is called with. In this case, stdin(console input)
	// had a stray \n newline character stored after entering the birth date, which was getting incorporated into the scanf() call for phone number.
	// fflush has been added in here for cosmetic purposes(to remove newline). But if you feel uncomfortable using something you haven't learnt about yet, feel free to remove this.
	fflush(stdin);
	scanf("%78[0-9 \n]", phonenumber);

	printf("\n\nThus concludes the scanf() test. Here is the data that was received.");
	printf("\nFirst name: %s", firstname);
	printf("\nBirth date: %d/%d/%d", birthdate[0], birthdate[1], birthdate[2]);
	printf("\nPhone number: %s", phonenumber);

	return 0;
}