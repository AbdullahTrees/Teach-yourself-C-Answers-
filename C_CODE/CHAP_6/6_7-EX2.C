#include <stdio.h>
#include <conio.h>

void changebyvar(int changee);
void changebypointer(int *addresstochangee);

int main(void)
{
	int a=5;

	printf("Usually, when one passes an integer variable into a function, the function receives a copy of the integer. This means when the function changes the value of the integer and exits, there is NO CHANGE to the initial integer variable that was passed down to the function. Here's a little test...");
	getch();

	printf("\n'a' started with an initial value of %d", a);
	printf("\nNow we call function 'changebyvar' which is supposed to change the value of a to -1.");
	getch();
	changebyvar(a);
	printf("\n'a' is now %d", a);

	printf("\n\nDid the value of a change? Now let's try the function 'changebypointer' which also tries to change the value of a to -1");
	getch();
	changebypointer(&a);
	printf("\n'a' is now %d", a);

	printf("\n\nDid the value of a change? Now draw your own conclusions...");
	getch();

	return 0;
}

void changebyvar(int changee)
{
	changee = -1;
}

void changebypointer(int *addresstochangee)
{
	*addresstochangee = -1;
}