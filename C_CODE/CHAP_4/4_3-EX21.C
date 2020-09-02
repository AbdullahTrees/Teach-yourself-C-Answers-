#include <stdio.h>
#include <conio.h>

int main(void)
{
	char ch;
	long int num;

	while (1)
    {
        printf("\nhey... can i borrow a number please, its an emergency... I promise to return it... [Y/N] ");
        ch = getche();

        switch (ch)
        {
            case 'y': case 'Y': break;
            case 'n': case 'N': return 0;
            default: continue;
        }

        if ((ch == 'y') || (ch == 'Y'))
            break;
    }

	printf("\ngreat... so give the number... quick.... ");
	scanf("%ld", &num);

	/* the guy does something wierd with the number */

	printf(".. OK!!! I'M DONE... THANKS FOR THE NUMBER, YOU CAN HAVE IT BACK NOW. \n\n\n  %ld\n\nHAVE A NICE DAY... BYE... THANKS AGAIN...", num);
	return 0;
}
