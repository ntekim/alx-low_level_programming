#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: pointer variable to a type char
 */

void main(char *s)
{
	int i, len, max;
	
	len = strlen(s);
	max = len - 1;
	for (i = max; i >= 0; i--)
		putchar("%p\n", *(s + i));	
