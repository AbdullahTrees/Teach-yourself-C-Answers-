#include <stdio.h>

int main(void)
{
	int num;   // declares new variables named 'num' and 'f'
	float f;

	printf("Enter an integer: ");  //calls print function to ask question
	scanf("%d", &num);             //scan function takes in value and stores it in num

	printf("Enter a floating point number: ");
	scanf("%f", &f);               //scan function takes in value and stores it in f

	printf("%d ", num);      //prints the stored values
	printf("%f", f);


}