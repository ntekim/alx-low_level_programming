#include "main.h"
#include <stdio.h>
/**
 * print_line - print _ based on the n value
 *
 * @n: parameter to be inputed
 */

void print_line(int n)
{
	int c;

	if (n > 0)
	{
		for (c = 0; c <= n; c++)
			_putchar('_');

		_putchar('\n');
	}

	_putchar('\n');
}
