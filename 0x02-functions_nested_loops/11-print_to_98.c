#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all natural number from n to 98
 *
 * @n: input parameter
 *
 * Return: 0 (success)
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n--);
		}
		printf("\n");
	}
	else if (n == 98)
	{
		printf("%d ", n);
	}
	else
	{

		while (n < 98)
		{
			printf("%d, ", n++);
		}
		printf("\n");
	}
}
