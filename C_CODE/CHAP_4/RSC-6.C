#include <stdio.h>
#include <conio.h>

int main(void)
{
	char choice;
	float num;

	while (1)
	{
		printf("\n\nConvert\n\t1. Feet to Meters\n\t2. Meters to Feet\n\t3. Ounces to Pounds\n\t4. Pounds to Ounces\n\t5. Quit\nEnter the number of your choice: ");
		choice = getche();

		switch (choice)
		{
			case '1':
			{
				printf("\n\nEnter Feet: ");
				scanf("%f", &num);

				printf("\n%g feet is %g meters. ", num, num*0.3048);
				break;
			}
			case '2':
			{
				printf("\n\nEnter Meters: ");
				scanf("%f", &num);

				printf("\n%g meters is %g feet. ", num, num*3.28084);
				break;
			}
			case '3':
			{
				printf("\n\nEnter Ounces: ");
				scanf("%f", &num);

				printf("\n%g ounces is %g pounds. ", num, num*0.0625);
				break;
			}
			case '4':
			{
				printf("\n\nEnter Pounds: ");
				scanf("%f", &num);

				printf("\n%g pounds is %g ounces. ", num, num*16);
				break;
			}
			case '5':
				goto exit;
			default:
				continue;
		}
	}

	exit: return 0;
}
