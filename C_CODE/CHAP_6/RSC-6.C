#include <stdio.h>
#include <string.h>

int main(void)
{
	char phonebook[][2][80] = {
											"Shikamaru", 			"01189232875",
											"Pascal Bhai", 			"20948103194",
											"Mamu", 				"029293498",
											"Sivaji b0ss", 			"00123011551",
											"Ahmed", 				"91235381273",
											"Meme dealer Abrar", 	"029183572",
											"Tilapia", 				"028593456",
											"Raizan", 				"024348556",
											"Captain Black", 		"28103892325",
											"Ammu", 				"18180348769",
											"Nana bhai", 			"029384234"
                                };

    char name[80] = "";

	int i;

	printf("WARNING: gets() implementation... Do NOT input more than 80 characters!\n");
	printf("Da Telephone book of kewl people\n");
	printf("Enter a name: ");
	gets(name);

	for (i=0; phonebook[i][0]; i++)
    {
        if (strcmp(name, phonebook[i][0]) == 0)
        {
            printf("\nEntry found: %s - %s", phonebook[i][0], phonebook[i][1]);
            return 0;
        }
    }

    printf("\nEntry not found... Please enter the correct name and try again... ");
    return 0;
}
