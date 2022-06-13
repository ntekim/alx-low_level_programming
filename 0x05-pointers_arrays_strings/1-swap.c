#include "main.h"
/**
 * swap_int - swap one integer for the other
 * @a: first integer
 * @b: second integer for the swap
 */

void swap_int(int *a, int *b)
{
	int swp = *a;
	*a = *b;
	*b = swp;
}
