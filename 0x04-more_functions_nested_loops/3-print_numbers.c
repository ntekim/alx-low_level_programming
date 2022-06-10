#include "main.h"
#include <stdio.h>
/**
 * print_numbers - print numbers (0-9)
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		putchar((n % 10) + '0');

	putchar('\n');
}
