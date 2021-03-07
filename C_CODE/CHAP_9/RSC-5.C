#include <stdio.h>

int main(void)
{
	char str[80], garbage[80];

	printf("Enter some numbers and then a string, I'll ignore the numbers: ");
	//scanf("[0-9]%70s", str);
	// Lesson learned: Turns out a scanset only makes sense with %s

	scanf("%[0-9]s %[^0-9]s", garbage, str);
	// scanf() is annoying as heck and doesn't work properly, I give up.
	printf("\n\nString: %s", str);

	return 0;
}