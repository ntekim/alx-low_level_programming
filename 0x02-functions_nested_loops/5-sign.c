#include "main.h"
/**
 * print_sign - Prints the sign of a number ( + positive && - negative)
 *
 * @n: character to check
 *
 * Return: 1 (success)
 * O (failure)
*/

int print_sign(int n)
{
	if (n > 0)
		_putchar("+");
	
	else if (n == 0)
		_putchar("0");

	else if (n < 0)
		_putchar("-");
}
