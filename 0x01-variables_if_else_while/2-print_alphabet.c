#include <stdio.h> 

/**
 *
 * main - (function of the program)
 *
 * Returns: 0 (success)
*/

int main(void) {
	char l;

	/*Loop through the alphabets from standard input and print to standard output */
	for (l = 'a'; l <= 'z'; ++l)
	{
		putchar(l);
		putchar('\n');
		return (0);
	}
}
