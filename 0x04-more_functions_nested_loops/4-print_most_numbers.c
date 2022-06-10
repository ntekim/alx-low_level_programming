#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - print number from 0-9 except 2 and 4
 *
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n == 2 || n == 4)
			continue;

		_putchar((n % 10) + '0');
	}

	_putchar('\n');
}
