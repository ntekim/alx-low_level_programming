#include "main.h"
/**
 * print_alphabet - Print alphabets in lowercase
 *
 * Return: void (nothing)
*/

void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; ++l)
		_putchar(l);

	_putchar('\n');
}
