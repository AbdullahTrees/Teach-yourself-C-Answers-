#include <stdio.h>

int main(void)
{
	char dummyvar;

	printf("This is a short program to test out the capabilities of the backslash constants in the printf function. Please press enter key to continue... ");
	scanf("%c", &dummyvar);

	printf("\n\nHere \n is \n the backslash-n \n character \n constant");
	printf("\nIf you didn't realise what that did, 'backslash+n' constant creates a new line whereever this constant is found. ");
	scanf("%c", &dummyvar);

	printf("\n\nHere is the\b backspace char-const\bant 123456789\b\b\b");
	scanf("%c", &dummyvar);
	printf("\nIf you didn't realise what that did, 'backslash+b' constant makes the printing cursor (blinking underscore in command prompt) go back by one character, causing it to overwrite the character that existed before it. \nIf at the very end of a string before a prompt, it makes the cursor go back but doesn't overwrite(as nothing was printed after receiving the constant...)");
	scanf("%c", &dummyvar);

	printf("\n\nHere is the \f form-feed \f\f\f character \f");
	printf("\nHmmm... Looks like 'backspace+f' character constant just prints the female symbol all over the place");
	scanf("%c", &dummyvar);

	printf("\n\nHere is the \r carriage return \r\r\r character \r");
	scanf("%c", &dummyvar);
	printf("\nA little bit hard to decipher what happened there, but basically, 'backslash-r' constant acts as a carriage return in typewriters, making the printing cursor return to the very beginning of the line.");
	scanf("%c", &dummyvar);

	printf("\n\n\"Here is the double-quote character constant\" \'And here's the single quote constant! Quite gud!\'");
	printf("\nThis one is understandable... In C, double quotes and single quotes have special meaning and are used to represent strings and characters, so actually showing a double-quote/single-quote in console is impossible... Unless you use the double quote and single quote constants, (backslash+\") and (backslash+\')");
	scanf("%c", &dummyvar);

	printf("\n Here is the \v vertical tab \v\v\v constant! \v");
	printf("\nHmmm, despite its name, vertical tab(backslash+v) doesn't actually create a lot of new lines, it just prints the male symbol character...");
	scanf("%c", &dummyvar);

	printf("\nHere is the n\0ull\0 character \0\0\0!");
	scanf("%c", &dummyvar);
	printf("\nThe null character stops printing whereever it is found.");
	scanf("%c", &dummyvar);

	printf("\nHere is the star of the show, the \\backslash char\\acter constant \\\\\\");
	scanf("%c", &dummyvar);
	printf("\nYou might have been wondering how you would've entered the blackslash character if you needed it to for some reason... It's just two backslashes in a row so (backslash+backslash)");
	scanf("%c", &dummyvar);

	printf("\nHuh??? \a Where is all \a \a \a this \a \a \a noise coming from \a \? \?\?");
	scanf("%c", &dummyvar);
	printf("\nHeh, that noise is due to the alert character constant, (backslash+a), and those questions at the end are due to (backslash+?) char constant");
	scanf("%c", &dummyvar);


	return 10;
}
