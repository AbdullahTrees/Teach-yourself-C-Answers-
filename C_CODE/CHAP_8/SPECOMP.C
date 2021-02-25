#include <stdio.h>
#include <time.h>
#include <conio.h>

int main(void)
{
	time_t start, end;
	double printf_time, putchar_time;
	int i;

	printf("printf() VS putchar() performance test. Press any key to begin printing 1500 single characters using printf(). ");
	getch();


	start = clock();
	for(i = 0; i < 1500; i++)
		printf("%c", 'a');
	end = clock();

	printf_time = (double)((double)(end - start)/(double)CLOCKS_PER_SEC);

	printf("\n\nPress any key to begin rinting 1500 single characters using putchar(). ");
	getch();

	start = clock();
	for(i = 0; i < 1500; i++)
		putchar('e');
	end = clock();

	putchar_time = (double)((double)(end - start)/(double)CLOCKS_PER_SEC);

	printf("Results are in! The printf() cycle took %lf seconds and the putchar() cycle took %lf seconds!", printf_time, putchar_time);
	return 0;
}