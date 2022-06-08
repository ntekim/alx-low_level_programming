#include "main.h"
/**
 * print_alphabet_x10 - print lowercased alphabets 10 times
 *
 * Return: void (nothing)
*/

void print_alphabet_x10(void)
{
	char l;
	int count = 0;

	while (count++ <= 9)
	{
		for (l = 'a'; l <= 'z'; l++)
			_putchar(l);

		_putchar('\n');
}
