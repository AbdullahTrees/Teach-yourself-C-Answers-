#include <stdio.h>

int sum(int a, int b);
int prod(int a, int b);

int main(void)
{
	int num1;
	int num2;
	int choice;

	printf("Enter a number. ");
	scanf("%d", &num1);

	printf("Enter another number. ");
	scanf("%d", &num2);

	printf("Select an option= ");
	printf("1. Add these number,  2. Multiply these numbers : ");
	scanf("%d", &choice);

	if(choice == 1)
		printf("The sum of these two numbers is %d. ", sum(num1, num2) );
	else
		if(choice == 2)
			printf("The product of these two numbers is %d. ", prod(num1, num2) );
		else
			printf("Please select the correct option and try again. ");

	return 0;
}

int sum(int a, int b)
{
	return a+b;
}

int prod(int a, int b)
{
	return a*b;
}