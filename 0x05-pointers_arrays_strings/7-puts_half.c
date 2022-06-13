#include "main.h"
#include <string.h>

/**
 * puts_half - Prints half of a string.
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
	int i, len, n;

	len = strlen(str);

	if ((len % 2) == 0)
		n = len / 2;

	else
		n = (len + 1) / 2;

	for (i = n; i < len; i++)
		_putchar(*(str + 1));

	_putchar('\n');
}
