#include "main.h"
/**
 * print_square - print square based on size inputed
 *
 * @size: the print_square argument
 */

void print_square(int size)
{
	int len, n_o_t;

	if(size > 0)
	{
		for (len = 0; len < size; len++)
		{
			for (n_o_t = 0; n_o_t < size; n_o_t++)
			{
				_putchar("#");
			}

			_putchar('\n');
		}
	}

	_putchar('\n');
}
