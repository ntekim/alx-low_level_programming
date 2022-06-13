#include "main.h"
#include <string.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: pointer variable a
 * @n: number of elements of the array to be printed
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i <= n; i++)
	{
		_putchar(a[i]);

		if (i == n)
			continue;

		printf(", ")
	}
}
