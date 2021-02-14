#include <stdio.h>
#include <string.h>

int main(void)
{
	char *ans[3] = {"Yes", "No", "Maybe. Rephrase the question."};
	char question[100];

	int index;

	printf("WARNING: gets() implementation, do not input more than 100 characters!!!\n\n");
	printf("Ask a question: ");
	gets(question);

	index = strlen(question) % 3;

	printf("\n%d %s", index, ans[index]);
	return 0;
}