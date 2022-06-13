#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: pointer variable to a type char
 */

void print_rev(char *s)
{
	int i, len, max;
	
	len = strlen(s);
	max = len - 1;
	for (i = max; i >= 0; i--)
		_putchar("%c", *(s + i));

	_putchar('\n');
}	
