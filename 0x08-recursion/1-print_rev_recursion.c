#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - print string in reverse
 *
 * @s: pointer variable
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev-recursion(s + 1);
		putchar(*s);
	}
}
