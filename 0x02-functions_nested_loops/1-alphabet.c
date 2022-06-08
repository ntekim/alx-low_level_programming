#include "main.h"
/**
 * main - Print alphabets in lowercase
 *
 * Return: 0 (success)
*/

int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; ++l)
		_putchar(l);

	_putchar("\n");
	return (0);
}
