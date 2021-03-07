/* Binary contents exchanger.

	Advanced stuff used: remove(char str[]);  deletes the file in the parameter, used to delete the tempstore file
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
	FILE *exch1, *exch2, *tempstore;
	char ch; 

	printf("Program that exchanges the contents of two files. ");

	if (argc != 3)
	{
		printf("\nUsage: %s <file 1> <file 2>", argv[0]);
		return 1;
	}
	else
	{
		if ((exch1 = fopen(argv[1], "rb")) == NULL)
		{
			printf("\nError opening file %s: Are you sure the file exists?", argv[1]);
			return 5;
		}
		if ((tempstore = fopen("tmpstore", "wb")) == NULL)
		{
			printf("\nError creating temporary store file: Unknown error");
			return 7;
		}
		/* file1 to tempstore*/
		while (1) // not a good idea to use feof() to control the loop, especially as you may write past the actual end-of-file
		{
			ch = fgetc(exch1);

			if (ferror(exch1) || ferror(tempstore))
			{
				printf("\nError reading/writing from first file to temporary store file! Program aborted");
				return 253;
			}

			if (feof(exch1))
				break;
			else
				fputc(ch, tempstore);
		}
		fclose(exch1);     // right now, fclose() is the only way we know to reset current position of the pointer to the beginning of the file
		fclose(tempstore);


		if ((exch1 = fopen(argv[1], "wb")) == NULL)
		{
			printf("\nError opening file %s: Are you sure the file exists?", argv[1]);
			return 5;
		}
		if ((exch2 = fopen(argv[2], "rb")) == NULL)
		{
			printf("\nError opening file %s: Are you sure the file exists?", argv[2]);
			return 6;
		}
		/* file2 to file1 */
		while (1)
		{
			ch = fgetc(exch2);

			if (ferror(exch1) || ferror(exch2))
			{
				printf("\nError reading/writing from first file to second file! Program aborted");
				return 254;
			}

			if (feof(exch2))
				break;
			else
				fputc(ch, exch1);
		}
		fclose(exch1);
		fclose(exch2);


		if ((tempstore = fopen("tmpstore", "rb")) == NULL)
		{
			printf("\nError reading temporary store file: Unknown error");
			return 7;
		}
		if ((exch2 = fopen(argv[2], "wb")) == NULL)
		{
			printf("\nError opening file %s: Are you sure the file exists?", argv[2]);
			return 6;
		}
		/* tempstore to file2 */
		while (1)
		{
			ch = fgetc(tempstore);

			if (ferror(tempstore) || ferror(exch2))
			{
				printf("\nError reading/writing from first file to second file! Program aborted");
				return 254;
			}

			if (feof(tempstore))
				break;
			else
				fputc(ch, exch2);
		}
		fclose(exch2);

		printf("\n\nExchange completed successfully!");

		remove("tmpstore");
		fclose(tempstore);
	}

	return 0;
}