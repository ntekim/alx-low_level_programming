#include "main.c"
/**
 * print_to_98 - print all natural number from n to 98
 *
 * @n: input parameter
 *
 * Return: 0 (success)
 */

void print_to_98(int n)
{
	while (n < 98;)
	{
		_putchar(n);
		_putchar(",");
		_putchar(" ");

		n++;
	}
}
