#include <stdio.h>

int main(void)
{
	char str[500] = "", str2[500] = "";
	int i, j, k, size_string;

	printf("String \"character-by-character\" alternator: Enter a string [MAX 500 chars]\n");
	gets(str);

	/* Strategy: First find the length of the string, then take action
        1) Once end has been found, copy elements of input array to output array
        2) Input-Output array writing is done in this order
                - (0+1)st element of Input = 1st element of Output
                - (0+2)nd element of Input = Last element of Output

                - (2+1)rd element of Input = 2nd element of Output
                - (2+2)th element of Input = 2nd last element of Output

                - (4+1)rd element of Input = 3rd element of Output
                - (4+2)th element of Input = 3rd last element of Output

            So on and so forth... this is called 'paired writing', as we are formatting the output array 2 characters at a time.
        3) This works fine for even-number sized strings, but due to the paired nature, there is a double copying that occurs for odd-numbered strings.
            in this case, there is always a predictable double copy of the middle of the string... Best explained with an example...

            For "Hi there",   ---> Expected Output = "Heir eth"   |  Program Output = "Heir eth"                NO PROBLEM!
            For "Hi there!".  ---> Expected Output = "H!ie rteh"  |  Program Output = "H!ie rtehh"              UH OH!

            This happens because of the condition that controls the rearranging loop. The condition is (

                For even-numbered strings, i and j are not equal before size_i/2 is reached, and so the same array index is not accessed twice
                (i.e. unique data), so all of it is relevant.
                But for odd-numbered strings, i and j are equal when they reach size_i/2, and so they access the same array index TWICE. This means that
                a copy of the data is made into the output array that did not exist in the input array. This copy always exists at the very end of the
                output array

            Since this redundant copy only exists WHEN the string size is odd, we can create a special if condition to remove the extra copy out!
    */
	for (i=0; ; i++)     // End finder
	{
		if (str[i] == 0)   // String end found, beginning rearranging
		{
			size_string = i-1;
            // beware, don't modify the terminator (rearranging characters in a string shouldn't change its size)

			for (j=0, k=0; ((j <= size_string/2)); k=k+2, j++)    // actual rearranging loop
			{
				str2[k] = str[j];
				str2[k+1] = str[size_string - j];         // Paired writing. Writes two characters at a time to Output array, 1 from (j)th position and 1 from (length_string-j)th position)
				printf("\n--DEBUG= size_i: %d| j: %d| i: %d| k: %d", size_string, j, i, k);
			}
			if (size_string%2 == 1)
				str2[k-1] = '\0';

			break;
		}
	}

	printf("\n%s", str2);

	return 0;
}
