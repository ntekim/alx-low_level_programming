#include "main.h"
/**
 * more_numbers - print the numbers 0-14 10 times
 */

void more_numbers(void)
{
	int n, t;

	for (t = 0; t < 10; t++)
	{
		for (n = 0; n < 14; n++)
			_putchar(n);

		_puchar('\n');

	}
}
