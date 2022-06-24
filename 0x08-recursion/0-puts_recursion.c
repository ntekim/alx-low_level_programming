#include "main.h"
/**
 * _puts_recursion - Prints a string folowed by new line
 *
 * @s: pointer variable
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
