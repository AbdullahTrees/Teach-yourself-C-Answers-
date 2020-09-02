#include <stdio.h>
#include <conio.h>

int main(void)
{
	float m;
	char ch;

	printf("\nTip Calculator!!11!\n\n");
	printf("---------------------------------\n");
	printf("|\t|\t Tip \t\t|\n");
	printf("| Money\t|-----------------------|\n");
	printf("|\t| 10%\t| 15%\t| 20%\t|\n");
	printf("---------------------------------\n");

	for (m=1.0; m<101.0; m++)
	{
		if (m==87.0 || m==89.0 || m==91.0 || m==93.0 || m==95.0 || m==97.0 || m==99.0)
			printf("| %g\t| %g\t| %g| %g\t|", m, m+(m*0.1), m+(m*0.15), m+(m*0.2));
		else
			printf("| %g\t| %g\t| %g\t| %g\t|", m, m+(m*0.1), m+(m*0.15), m+(m*0.2));

		printf("    Continue? (Q to exit)");
		ch = getche();
		if (ch=='q')
		{
			printf("\b \n");
			break;
		}
		else
        {
            printf("\b\                        \n");
            getche();
        }

	}
	printf("---------------------------------\n");

	return 0;
}
