#include <stdio.h>
/**
 * main - (function of the program)
 *
 * Return: 0 (success)
*/

int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; ++l)
	{
		if (l == 'e' || l == 'q')
		continue;

		putchar(l);
	}
	putchar('\n');
	return (0);
}
