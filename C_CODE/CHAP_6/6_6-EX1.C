#include <stdio.h>

int main(void)
{
	int **sip, *fip, le_integer;

	fip = &le_integer;
	sip = &fip;

	//hence
	**sip = 101;

	printf("le_integer: %d\nle_integer address: %p\nsip address: %p\nfip address: %p", **sip, *sip, &sip, sip);
	return 0;
}