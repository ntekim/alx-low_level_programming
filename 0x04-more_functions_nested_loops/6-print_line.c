#include "main.h"
/**
 * print_line - print _ based on the n value
 *
 * @n: parameter to be inputed
 */

void print_numbers(int n)
{
	int c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c <= n; c++)
			_putchar("_");

		_putchar("\n");
	}
}
