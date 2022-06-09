#include "main.h"
#include <stdlib.h>
/**
 * _abs - prints absolute value of a number
 * 
 * @n: character to print
 *
 * Return: 0 (success)
*/

int _abs(int n)
{
	int num;
	
	num = abs(n);
	_putchar(num);
	return (0);
}
